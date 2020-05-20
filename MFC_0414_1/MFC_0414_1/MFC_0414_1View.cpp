
// MFC_0414_1View.cpp : CMFC_0414_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC_0414_1.h"
#endif

#include "MFC_0414_1Doc.h"
#include "MFC_0414_1View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_0414_1View

IMPLEMENT_DYNCREATE(CMFC_0414_1View, CView)

BEGIN_MESSAGE_MAP(CMFC_0414_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CMFC_0414_1View::OnPopout)
END_MESSAGE_MAP()

// CMFC_0414_1View ����/����

CMFC_0414_1View::CMFC_0414_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC_0414_1View::~CMFC_0414_1View()
{
}

BOOL CMFC_0414_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC_0414_1View ����

void CMFC_0414_1View::OnDraw(CDC* pDC)
{
	CMFC_0414_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC_0414_1View ���

#ifdef _DEBUG
void CMFC_0414_1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_0414_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_0414_1Doc* CMFC_0414_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_0414_1Doc)));
	return (CMFC_0414_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_0414_1View ��Ϣ�������


void CMFC_0414_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC_0414_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CFileDialog dlg(TRUE);
	CClientDC dc(this);
	if (dlg.DoModal() == IDOK)
	{
		FileName = dlg.GetPathName();
		dc.TextOutW(100, 100, FileName);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CMFC_0414_1View::OnPopout()
{
	// TODO: �ڴ���������������
	CMFC_0414_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	MyDlg m;
	m.s = FileName;
	int t = m.DoModal();
	this->UpdateData(true);
}
