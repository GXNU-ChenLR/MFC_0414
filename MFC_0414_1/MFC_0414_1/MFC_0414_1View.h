
// MFC_0414_1View.h : CMFC_0414_1View 类的接口
//

#pragma once


class CMFC_0414_1View : public CView
{
protected: // 仅从序列化创建
	CMFC_0414_1View();
	DECLARE_DYNCREATE(CMFC_0414_1View)

// 特性
public:
	CMFC_0414_1Doc* GetDocument() const;

// 操作
public:
	CString FileName;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC_0414_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFC_0414_1View.cpp 中的调试版本
inline CMFC_0414_1Doc* CMFC_0414_1View::GetDocument() const
   { return reinterpret_cast<CMFC_0414_1Doc*>(m_pDocument); }
#endif

