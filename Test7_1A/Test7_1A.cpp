#include "Test7_1A.h"

#include "LoginDlg.h"

#include <QMessageBox>

Test7_1A::Test7_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnLogin, SIGNAL(clicked()), this, SLOT(OnBtnLogin()));
}

int Test7_1A::OnBtnLogin()
{

	LoginDlg dlg("MingweiCao", this );

	int flag = dlg.exec();

	if (flag == QDialog::Accepted)
	{
		QMessageBox::information(this, "info", dlg.mUser + " -> " + dlg.mPasswd);
	}
	else
	{

	}


	return 0;
}
