#include "model.h"



model::model()
{
	this->num1 = 0.0;
	this->num2 = 0.0;
}


model::~model()
{
}

void model::setNum1(float num)
{
	this->num1 = num;
}

void model::setNum2(float num)
{
	this->num2 = num;
}
void model::setFlag(QString flag)
{
	this->flag = flag;
}

QString model::doExper()
{
	float result = 0;
	if (this->flag=="+")
	{
		result = this->num1 + this->num2;
	}
	else if (this->flag == "-")
	{
		result = this->num1 - this->num2;
	}
	else if (this->flag == "*")
	{
		result = this->num1 * this->num2;
	}
	else if (this->flag == "/")
	{
		//����Ϊ0�Ļ�����
		if (this->num2==0)
		{
			return "ERROR";
		}
		result = this->num1 / this->num2;
	}
	else
	{
		return QString::number(this->num1);

	}
	return QString::number(result);
}