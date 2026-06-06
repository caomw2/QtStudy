#include "LoginDlg.h"

LoginDlg::LoginDlg(const char * str,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(OnBtnOK()));
	connect(ui.btnCancel, SIGNAL(clicked()), this, SLOT(OnBtnCancel()));

	ui.editUser->setText(str);

}

LoginDlg::~LoginDlg()
{

}

int LoginDlg::OnBtnOK()
{

	mUser = ui.editUser->text();

	mPasswd = ui.editPasswd->text();

	
	accept();

	return 0;
}

int LoginDlg::OnBtnCancel()
{

	//
	reject();

	return 0;
}
