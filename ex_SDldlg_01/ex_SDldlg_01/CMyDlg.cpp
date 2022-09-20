// CMyDlg.cpp: 实现文件
//

#include "pch.h"
#include "ex_SDldlg_01.h"
#include "CMyDlg.h"
#include "afxdialogex.h"


// CMyDlg 对话框

IMPLEMENT_DYNAMIC(CMyDlg, CDialogEx)

CMyDlg::CMyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CMyDlg::~CMyDlg()
{
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDlg, CDialogEx)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()


// CMyDlg 消息处理程序


void CMyDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString str;

	num++;
	str.Format("鼠标左键按下了%d", num);

	MessageBox(str, "按键次数", 1);

	CDialogEx::OnLButtonDown(nFlags, point);
}


void CMyDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CString str;

	num1++;
	str.Format("鼠标右键按下了%d", num1);

	MessageBox(str, "按键次数", 1);
	CDialogEx::OnRButtonDown(nFlags, point);
}
