
// MFC_0414_1.h : MFC_0414_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC_0414_1App:
// �йش����ʵ�֣������ MFC_0414_1.cpp
//

class CMFC_0414_1App : public CWinApp
{
public:
	CMFC_0414_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_0414_1App theApp;
