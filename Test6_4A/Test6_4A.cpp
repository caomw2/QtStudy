#include "Test6_4A.h"
#include <QTextCodec>
#include "GBK.hpp"

Test6_4A::Test6_4A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnTest, SIGNAL(clicked()), this, SLOT(OnBtnTest()));

}

std::string fromUnicode(const QString &qstr)
{
	QTextCodec *pCodec = QTextCodec::codecForName("gb2312");
	if (pCodec == nullptr)
	{
		return "";
	}

	QByteArray arr = pCodec->fromUnicode(qstr);

	std::string str = std::string(arr.data());

	return str;
}

QString toUnicode(const std::string &str)
{
	QTextCodec * pCodec = QTextCodec::codecForName("gb2312");
	if (pCodec == nullptr)
	{
		return "";
	}

	QString qstr = pCodec->toUnicode(str.c_str(), str.length());

	return qstr;

}

int Test6_4A::OnBtnTest()
{
	//GBK->QString
	

	QString qstr = ui.lineEdit->text();

	std::string str = "ÄãºÃ";

	//std::string str = GBK::GetInstance()->fromUnicode(qstr);

	
	ui.lineEdit->setText(GBK::GetInstance()->toUnicode(str));
	
	
	
	return 0;
}
