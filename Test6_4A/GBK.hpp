#pragma once

#include <string>
#include <QString>
#include <QTextCodec>

class GBK
{
public:
	GBK();
	virtual ~GBK();

private:
	static	QTextCodec *pCodec;

	static GBK * mInstance;

public:

	static GBK * GetInstance();

	//将QT控件中的中文转换为QString类型;
	static std::string fromUnicode(const QString &qstr);

	//将string转换为能在控件显示的QString类型;
	static QString toUnicode(const std::string &str);


};

