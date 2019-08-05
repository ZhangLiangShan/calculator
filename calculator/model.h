#pragma once
#include<qstring.h>
//num1 +-*/ num2
class model
{
public:
	model();
	~model();
	void setNum1(float num);
	void setNum2(float num);
	void setFlag(QString flag);
	QString doExper();
private:
	float num1, num2;
	QString flag;



};

