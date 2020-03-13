
// humanDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "human.h"
#include "humanDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// ChumanDlg 对话框



ChumanDlg::ChumanDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HUMAN_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void ChumanDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(ChumanDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &ChumanDlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT2, &ChumanDlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON1, &ChumanDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// ChumanDlg 消息处理程序

BOOL ChumanDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void ChumanDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void ChumanDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR ChumanDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void ChumanDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CString edit1;
	CString edit2;
	CString edit3;
	CString edit4;
	CString edit5;
	CString edit6;
	
	CString out1;
	CString out2;
	CString out3;
	CString out4;
	CString out5;
	CString out6;

	GetDlgItemText(IDC_EDIT2,edit1);
	GetDlgItemText(IDC_EDIT1, edit2);
	GetDlgItemText(IDC_EDIT3, edit3);
	GetDlgItemText(IDC_EDIT4, edit4);
	GetDlgItemText(IDC_EDIT5, edit5);
	GetDlgItemText(IDC_EDIT6, edit6);

	int pastyear = _tstoi(edit2);
	int pastmonth = _tstoi(edit1);
	int pastday = _tstoi(edit3);
	int thisyear = _tstoi(edit4);
	int thismonth = _tstoi(edit5);
	int thisday = _tstoi(edit6);
	int xo=0;
	int yo=0;



	if ((pastyear % 4 == 0 && pastyear % 100 != 0) || (pastyear % 400 == 0))
	{

		switch (pastmonth)
		{
		case 1:xo = 0; break;
		case 2:xo= 31; break;
		case 3:xo = 31 + 29; break;
		case 4:xo = 31 + 29 + 31; break;
		case 5:xo = 31 + 29 + 31 + 30; break;
		case 6:xo = 31 + 29 + 31 + 30 + 31; break;
		case 7:xo = 31 + 29 + 31 + 30 + 31 + 30; break;
		case 8:xo = 31 + 29 + 31 + 30 + 31 + 30 + 31; break;
		case 9:xo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10:xo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11:xo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12:xo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
			break;
		}
	}
	else
		switch (pastmonth)
		{
		case 1:xo= 0; break;
		case 2:xo = 31; break;
		case 3:xo = 31 + 28; break;
		case 4:xo = 31 + 28 + 31; break;
		case 5:xo = 31 + 28 + 31 + 30; break;
		case 6:xo= 31 + 28 + 31 + 30 + 31; break;
		case 7:xo = 31 + 28 + 31 + 30 + 31 + 30; break;
		case 8:xo = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
		case 9:xo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10:xo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11:xo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12:xo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
			break;
		}


	if ((thisyear % 4 == 0 && thisyear % 100 != 0) || (thisyear % 400 == 0))
	{

		switch (thismonth)
		{
		case 1:yo = 0; break;
		case 2:yo = 31; break;
		case 3:yo = 31 + 29; break;
		case 4:yo = 31 + 29 + 31; break;
		case 5:yo = 31 + 29 + 31 + 30; break;
		case 6:yo = 31 + 29 + 31 + 30 + 31; break;
		case 7:yo = 31 + 29 + 31 + 30 + 31 + 30; break;
		case 8:yo = 31 + 29 + 31 + 30 + 31 + 30 + 31; break;
		case 9:yo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10:yo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11:yo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12:yo = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
			break;
		}
	}

	else
		switch (thismonth)
		{
		case 1:yo= 0; break;
		case 2:yo = 31; break;
		case 3:yo= 31 + 28; break;
		case 4:yo = 31 + 28 + 31; break;
		case 5:yo = 31 + 28 + 31 + 30; break;
		case 6:yo = 31 + 28 + 31 + 30 + 31; break;
		case 7:yo = 31 + 28 + 31 + 30 + 31 + 30; break;
		case 8:yo = 31 + 28 + 31 + 30 + 31 + 30 + 31; break;
		case 9:yo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break;
		case 10:yo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break;
		case 11:yo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break;
		case 12:yo = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
			break;
		}
 

	int yeardiff = thisyear - pastyear;
	int years1 = 365 * yeardiff;
	int leaps = years1 / 4;
	int years2 = years1 + leaps;
	int SUM = years2 - (xo + pastday) + (yo + thisday);
	int labor = SUM % 23;
	int emotion = SUM % 28;
	int widsom = SUM % 33;
	
	out1.Format(_T("你的体力周期为:%d "),labor);
	out2.Format(_T("你的情绪周期为：%d"),emotion);
	out3.Format(_T("你的智慧周期为：%d"),widsom);

	MessageBox(out1, _T("人体生物节律："));
	MessageBox(out2, _T("人体生物节律："));
	MessageBox(out3, _T("人体生物节律："));

	if (labor >= 1 && labor <= 3)
	
	out4="你的体力节律处于临界期！最近要劳逸结合哟~\n";
	
	else if ((labor >= 4 && labor <= 12) || (labor >= 19 && labor <= 26))
	out4="你的体力节律处于低潮期！不要劳动过多，以免对身体不好呢~\n";
	
	else
	out4="你的体力节律处于高潮期！可以加强运动，也不会觉得很累哪~\n";
	if (emotion >= 1 && emotion <= 3)
	out5="你的情绪节律处于临界期，要注意随时坏脾气可能爆发哟！\n";
	
	else if ((emotion >= 4 && emotion <= 12) || (emotion >= 20 && emotion <= 26))
	out5="你的情绪节律处于低谷期，坏脾气太多可不太好哟！\n";
	
	else
		out5="你的情绪节律处于高潮期，你的情绪正在泛滥，希望是好情绪呢！\n";
	if (widsom >= 1 && widsom <= 3)
	out6="你的智慧水平还行，再接再厉！\n";
	
	else if ((widsom >= 4 && widsom <= 12) || (widsom >= 20 && widsom <= 26))
	out6="你的智商处于低谷期，多动动脑筋哟~\n";
	
	else
		out6="你的智商太棒啦！你太聪明啦！\n";

	MessageBox(out4, _T("人体生物节律"));
	MessageBox(out5, _T("人体生物节律"));
	MessageBox(out6, _T("人体生物节律"));






}


void ChumanDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void ChumanDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	AfxGetMainWnd()->SendMessage(WM_CLOSE);

}
