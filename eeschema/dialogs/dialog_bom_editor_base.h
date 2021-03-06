///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr  1 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_BOM_EDITOR_BASE_H__
#define __DIALOG_BOM_EDITOR_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class DIALOG_SHIM;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/checkbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/dataview.h>
#include <wx/panel.h>
#include <wx/splitter.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

#define OPT_GROUP_COMPONENTS 1000
#define ID_BUTTON_REGROUP 1001
#define ID_BUTTON_APPLY 1002
#define ID_BUTTON_REVERT 1003

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_BOM_EDITOR_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_BOM_EDITOR_BASE : public DIALOG_SHIM
{
	DECLARE_EVENT_TABLE()
	private:

		// Private event handlers
		void _wxFB_OnDialogClosed( wxCloseEvent& event ){ OnDialogClosed( event ); }
		void _wxFB_OnUpdateUI( wxUpdateUIEvent& event ){ OnUpdateUI( event ); }
		void _wxFB_OnGroupComponentsToggled( wxCommandEvent& event ){ OnGroupComponentsToggled( event ); }
		void _wxFB_OnRegroupComponents( wxCommandEvent& event ){ OnRegroupComponents( event ); }
		void _wxFB_OnColumnItemToggled( wxDataViewEvent& event ){ OnColumnItemToggled( event ); }
		void _wxFB_OnBomColumReordered( wxDataViewEvent& event ){ OnBomColumReordered( event ); }
		void _wxFB_OnBomColumnSorted( wxDataViewEvent& event ){ OnBomColumnSorted( event ); }
		void _wxFB_OnTableItemActivated( wxDataViewEvent& event ){ OnTableItemActivated( event ); }
		void _wxFB_OnTableItemContextMenu( wxDataViewEvent& event ){ OnTableItemContextMenu( event ); }
		void _wxFB_OnTableValueChanged( wxDataViewEvent& event ){ OnTableValueChanged( event ); }
		void _wxFB_OnSelectionChanged( wxDataViewEvent& event ){ OnSelectionChanged( event ); }
		void _wxFB_OnApplyFieldChanges( wxCommandEvent& event ){ OnApplyFieldChanges( event ); }
		void _wxFB_OnRevertFieldChanges( wxCommandEvent& event ){ OnRevertFieldChanges( event ); }
		void _wxFB_OnCloseButton( wxCommandEvent& event ){ OnCloseButton( event ); }


	protected:
		wxPanel* m_panel;
		wxSplitterWindow* m_splitter1;
		wxPanel* m_leftPanel;
		wxCheckBox* m_groupComponentsBox;
		wxButton* m_regroupComponentsButton;
		wxDataViewListCtrl* m_columnListCtrl;
		wxPanel* m_panel4;
		wxDataViewCtrl* m_bomView;
		wxButton* m_applyChangesButton;
		wxButton* m_revertChangesButton;
		wxButton* m_closeButton;

		// Virtual event handlers, overide them in your derived class
		virtual void OnDialogClosed( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnGroupComponentsToggled( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRegroupComponents( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnColumnItemToggled( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnBomColumReordered( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnBomColumnSorted( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnTableItemActivated( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnTableItemContextMenu( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnTableValueChanged( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnSelectionChanged( wxDataViewEvent& event ) { event.Skip(); }
		virtual void OnApplyFieldChanges( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRevertFieldChanges( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCloseButton( wxCommandEvent& event ) { event.Skip(); }


	public:

		DIALOG_BOM_EDITOR_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("BOM editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 775,654 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxRESIZE_BORDER );
		~DIALOG_BOM_EDITOR_BASE();

		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 231 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( DIALOG_BOM_EDITOR_BASE::m_splitter1OnIdle ), NULL, this );
		}

};

#endif //__DIALOG_BOM_EDITOR_BASE_H__
