/****************************************/
/******* initpcb.cpp ********************/
/****************************************/


#include "fctsys.h"
#include "common.h"
#include "class_drawpanel.h"
#include "confirm.h"

#include "gerbview.h"
#include "class_gerber_draw_item.h"
//#include "protos.h"


bool WinEDA_GerberFrame::Clear_Pcb( bool query )
{
    int layer;

    if( GetBoard() == NULL )
        return FALSE;

    if( query && GetScreen()->IsModify() )
    {
        if( !IsOK( this, _( "Current data will be lost?" ) ) )
            return FALSE;
    }
    GetBoard()->m_Drawings.DeleteAll();

    for( layer = 0; layer < 32; layer++ )
    {
        if( g_GERBER_List[layer] )
            g_GERBER_List[layer]->InitToolTable();
    }

    GetBoard()->m_BoundaryBox.SetOrigin( 0, 0 );
    GetBoard()->m_BoundaryBox.SetSize( 0, 0 );
    GetBoard()->m_Status_Pcb  = 0;
    GetBoard()->m_NbNodes     = 0;
    GetBoard()->m_NbNoconnect = 0;

    SetBaseScreen( ActiveScreen = ScreenPcb );
    GetScreen()->Init();
    setActiveLayer(LAYER_N_BACK);

    return TRUE;
}


void WinEDA_GerberFrame::Erase_Current_Layer( bool query )
{
    int      layer = getActiveLayer();
    wxString msg;

    msg.Printf( _( "Delete layer %d?" ), layer + 1 );
    if( query && !IsOK( this, msg ) )
        return;

    BOARD_ITEM* item = GetBoard()->m_Drawings;
    BOARD_ITEM * next;
    for( ; item; item = next )
    {
        next = item->Next();
        GERBER_DRAW_ITEM* gerb_item = (GERBER_DRAW_ITEM*) item;
        if( gerb_item->GetLayer() != layer )
            continue;
        gerb_item->DeleteStructure();
    }

    if( g_GERBER_List[layer] )
        g_GERBER_List[layer]->InitToolTable();

    ScreenPcb->SetModify();
    ScreenPcb->SetRefreshReq();
}
