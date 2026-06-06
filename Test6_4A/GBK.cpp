#include "GBK.hpp"


QTextCodec* GBK::pCodec = nullptr;

GBK::GBK()
{
	if (pCodec == nullptr)
	{
		pCodec = QTextCodec::codecForName("gb2312");
	}
}


GBK::~GBK()
{
	if (pCodec!= nullptr)
	{
		//delete pCodec;
		pCodec = nullptr;
	}

	if (mInstance != nullptr)
	{
		delete mInstance;
		mInstance = nullptr;
	}
}

GBK* GBK::mInstance = nullptr;

GBK * GBK::GetInstance()
{
	if (GBK::mInstance == nullptr)
	{
		GBK::mInstance = new GBK;
	}

	return GBK::mInstance;

}

std::string GBK::fromUnicode(const QString &qstr)
{
	//QTextCodec *pCodec = QTextCodec::codecForName("gb2312");
	if (pCodec == nullptr)
	{
		return "";
	}

	QByteArray arr = pCodec->fromUnicode(qstr);

	std::string str = std::string(arr.data());

	return str;
}

QString GBK::toUnicode(const std::string &str)
{
	//QTextCodec * pCodec = QTextCodec::codecForName("gb2312");
	if (pCodec == nullptr)
	{
		return "";
	}

	QString qstr = pCodec->toUnicode(str.c_str(), str.length());

	return qstr;

}
