/////////////////////////////////////////////////////////////////////////////
// Name:        wx/xrc/xh_notbk.h
// Purpose:     XML resource handler for wxNotebook
// Author:      Vaclav Slavik
// RCS-ID:      $Id$
// Copyright:   (c) 2000 Vaclav Slavik
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef MY_WX_XH_NOTBK_H_
#define MY_WX_XH_NOTBK_H_

#include <wx/xrc/xmlres.h>

class wxAuiNotebook;

class MyWxAuiNotebookXmlHandler : public wxXmlResourceHandler
{
public:
    MyWxAuiNotebookXmlHandler();
    virtual wxObject* DoCreateResource();
    virtual bool CanHandle(wxXmlNode* node);

private:
    bool m_isInside;
    wxAuiNotebook* m_notebook;
};

#endif // wxUSE_XRC && wxUSE_NOTEBOOK
