#include "Test5_4A.h"

#include <QMessageBox>

Test5_4A::Test5_4A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	connect(ui.btnHelp, SIGNAL(clicked()), this, SLOT(OnBtnHelp()));

}

int Test5_4A::OnBtnHelp()
{

	QMessageBox::information(this, "yes", "help");


	return 0;
}
