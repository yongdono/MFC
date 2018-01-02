#if !defined(AFX__COMMAND_H__77A63C0E_CCB7_4974_8667_F166C2CBF658__INCLUDED_)
#define AFX__COMMAND_H__77A63C0E_CCB7_4974_8667_F166C2CBF658__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// C_Command wrapper class

class C_Command : public CWnd
{
protected:
	DECLARE_DYNCREATE(C_Command)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x3c214d38, 0x1ef9, 0x4296, { 0xb3, 0xb3, 0x65, 0x68, 0x93, 0x64, 0x3a, 0xe6 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	BOOL GetShowFocus();
	void SetShowFocus(BOOL bNewValue);
	COleFont GetFont();
	void SetRefFont(LPDISPATCH newValue);
	void SetFont(LPDISPATCH newValue);
	unsigned long GetFontColor();
	void SetFontColor(unsigned long newValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	short GetFr();
	void SetFr(short nNewValue);
	short GetPr();
	void SetPr(short nNewValue);
	long GetAppearance();
	void SetAppearance(long nNewValue);
	long GetIconAlign();
	void SetIconAlign(long nNewValue);
	CPicture GetPicture();
	void SetRefPicture(LPDISPATCH newValue);
	void SetPicture(LPDISPATCH newValue);
	CPicture GetIcon();
	void SetRefIcon(LPDISPATCH newValue);
	void SetIcon(LPDISPATCH newValue);
	CPicture GetMouseIcon();
	void SetRefMouseIcon(LPDISPATCH newValue);
	short GetMousePointer();
	void SetMousePointer(short nNewValue);
	unsigned long GetICOMaskColor();
	void SetICOMaskColor(unsigned long newValue);
	unsigned long GetPICMaskColor();
	void SetPICMaskColor(unsigned long newValue);
	long GetBackStyle();
	void SetBackStyle(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__COMMAND_H__77A63C0E_CCB7_4974_8667_F166C2CBF658__INCLUDED_)