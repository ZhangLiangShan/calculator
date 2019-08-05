#pragma once

#include <QtWidgets/QDialog>
#include "ui_expr.h"

class expr : public QDialog
{
	Q_OBJECT

public:
	expr(QWidget *parent = Q_NULLPTR);

private:
	Ui::exprClass ui;
};
