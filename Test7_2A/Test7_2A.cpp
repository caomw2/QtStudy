#include "Test7_2A.h"

#include <QFileDialog>
#include <QMessageBox>

#include <cstdio>

Test7_2A::Test7_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnOpen, SIGNAL(clicked()), this, SLOT(OnBtnOpen()));
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(OnBtnSave()));
}

int Test7_2A::OnBtnOpen()
{
	QString filepath = QFileDialog::getOpenFileName(this, "OpenFile");

	//QStringList filevec = QFileDialog::getOpenFileNames(this, "OpenMultiFiles");

	//QMessageBox::information(this, "info", filepath);

	if (filepath>0)
	{

		std::FILE * file = std::fopen(filepath.toStdString().c_str(), "r");

		std::fseek(file, 0, SEEK_END);

		int len = std::ftell(file);

		char * buf = new char[len];

		std::fseek(file, 0, SEEK_SET);

		std::fread(buf, 1, len, file);

		QString qstr = QString::fromStdString(buf);

		//设置文本框内容
		ui.plainText->setPlainText(qstr);
		
		delete[] buf;
		buf = nullptr;

		std::fclose(file);	

	}
	
	return 0;
}

int Test7_2A::OnBtnSave()
{

	QString filepath = QFileDialog::getSaveFileName(this, "Save File");

	if (filepath>0)
	{

		//获取文本框内容
		QString qstr = ui.plainText->toPlainText();

		std::string str = qstr.toStdString();

		std::FILE * file = std::fopen(filepath.toStdString().c_str(), "w");

		std::fwrite(str.c_str(), 1, str.length(), file);

		std::fclose(file);		

	}



	return 0;
}
