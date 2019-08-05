/********************************************************************************
** Form generated from reading UI file 'expr.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPR_H
#define UI_EXPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_exprClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_display;
    QGridLayout *gridLayout;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_9;
    QPushButton *btn_add;
    QPushButton *btn_5;
    QPushButton *btn_multiplication;
    QPushButton *btn_clean;
    QPushButton *btn_0;
    QPushButton *btn_division;
    QPushButton *btn_8;
    QPushButton *btn_equal;
    QPushButton *btn_6;
    QPushButton *btn_subtraction;
    QPushButton *btn_7;
    QPushButton *btn_3;
    QPushButton *btn_4;

    void setupUi(QDialog *exprClass)
    {
        if (exprClass->objectName().isEmpty())
            exprClass->setObjectName(QStringLiteral("exprClass"));
        exprClass->resize(350, 480);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exprClass->sizePolicy().hasHeightForWidth());
        exprClass->setSizePolicy(sizePolicy);
        exprClass->setMinimumSize(QSize(350, 480));
        exprClass->setMaximumSize(QSize(350, 480));
        verticalLayout_2 = new QVBoxLayout(exprClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbl_display = new QLabel(exprClass);
        lbl_display->setObjectName(QStringLiteral("lbl_display"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(48);
        lbl_display->setFont(font);
        lbl_display->setStyleSheet(QStringLiteral("background-color: rgb(113, 113, 168);"));
        lbl_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lbl_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_1 = new QPushButton(exprClass);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(18);
        btn_1->setFont(font1);

        gridLayout->addWidget(btn_1, 0, 0, 1, 1);

        btn_2 = new QPushButton(exprClass);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);
        btn_2->setFont(font1);

        gridLayout->addWidget(btn_2, 0, 1, 1, 1);

        btn_9 = new QPushButton(exprClass);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);
        btn_9->setFont(font1);

        gridLayout->addWidget(btn_9, 2, 2, 1, 1);

        btn_add = new QPushButton(exprClass);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        sizePolicy1.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy1);
        btn_add->setFont(font1);

        gridLayout->addWidget(btn_add, 0, 3, 1, 1);

        btn_5 = new QPushButton(exprClass);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);
        btn_5->setFont(font1);

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_multiplication = new QPushButton(exprClass);
        btn_multiplication->setObjectName(QStringLiteral("btn_multiplication"));
        sizePolicy1.setHeightForWidth(btn_multiplication->sizePolicy().hasHeightForWidth());
        btn_multiplication->setSizePolicy(sizePolicy1);
        btn_multiplication->setFont(font1);

        gridLayout->addWidget(btn_multiplication, 2, 3, 1, 1);

        btn_clean = new QPushButton(exprClass);
        btn_clean->setObjectName(QStringLiteral("btn_clean"));
        sizePolicy1.setHeightForWidth(btn_clean->sizePolicy().hasHeightForWidth());
        btn_clean->setSizePolicy(sizePolicy1);
        btn_clean->setFont(font1);

        gridLayout->addWidget(btn_clean, 3, 0, 1, 1);

        btn_0 = new QPushButton(exprClass);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);
        btn_0->setFont(font1);

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_division = new QPushButton(exprClass);
        btn_division->setObjectName(QStringLiteral("btn_division"));
        sizePolicy1.setHeightForWidth(btn_division->sizePolicy().hasHeightForWidth());
        btn_division->setSizePolicy(sizePolicy1);
        btn_division->setFont(font1);

        gridLayout->addWidget(btn_division, 3, 3, 1, 1);

        btn_8 = new QPushButton(exprClass);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);
        btn_8->setFont(font1);

        gridLayout->addWidget(btn_8, 2, 1, 1, 1);

        btn_equal = new QPushButton(exprClass);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        sizePolicy1.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy1);
        btn_equal->setFont(font1);

        gridLayout->addWidget(btn_equal, 3, 2, 1, 1);

        btn_6 = new QPushButton(exprClass);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);
        btn_6->setFont(font1);

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_subtraction = new QPushButton(exprClass);
        btn_subtraction->setObjectName(QStringLiteral("btn_subtraction"));
        sizePolicy1.setHeightForWidth(btn_subtraction->sizePolicy().hasHeightForWidth());
        btn_subtraction->setSizePolicy(sizePolicy1);
        btn_subtraction->setFont(font1);

        gridLayout->addWidget(btn_subtraction, 1, 3, 1, 1);

        btn_7 = new QPushButton(exprClass);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);
        btn_7->setFont(font1);

        gridLayout->addWidget(btn_7, 2, 0, 1, 1);

        btn_3 = new QPushButton(exprClass);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);
        btn_3->setFont(font1);

        gridLayout->addWidget(btn_3, 0, 2, 1, 1);

        btn_4 = new QPushButton(exprClass);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);
        btn_4->setFont(font1);

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 7);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(exprClass);

        QMetaObject::connectSlotsByName(exprClass);
    } // setupUi

    void retranslateUi(QDialog *exprClass)
    {
        exprClass->setWindowTitle(QApplication::translate("exprClass", "Calculator", Q_NULLPTR));
        lbl_display->setText(QApplication::translate("exprClass", "0", Q_NULLPTR));
        btn_1->setText(QApplication::translate("exprClass", "1", Q_NULLPTR));
        btn_2->setText(QApplication::translate("exprClass", "2", Q_NULLPTR));
        btn_9->setText(QApplication::translate("exprClass", "9", Q_NULLPTR));
        btn_add->setText(QApplication::translate("exprClass", "+", Q_NULLPTR));
        btn_5->setText(QApplication::translate("exprClass", "5", Q_NULLPTR));
        btn_multiplication->setText(QApplication::translate("exprClass", "*", Q_NULLPTR));
        btn_clean->setText(QApplication::translate("exprClass", "C", Q_NULLPTR));
        btn_0->setText(QApplication::translate("exprClass", "0", Q_NULLPTR));
        btn_division->setText(QApplication::translate("exprClass", "/", Q_NULLPTR));
        btn_8->setText(QApplication::translate("exprClass", "8", Q_NULLPTR));
        btn_equal->setText(QApplication::translate("exprClass", "=", Q_NULLPTR));
        btn_6->setText(QApplication::translate("exprClass", "6", Q_NULLPTR));
        btn_subtraction->setText(QApplication::translate("exprClass", "-", Q_NULLPTR));
        btn_7->setText(QApplication::translate("exprClass", "7", Q_NULLPTR));
        btn_3->setText(QApplication::translate("exprClass", "3", Q_NULLPTR));
        btn_4->setText(QApplication::translate("exprClass", "4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exprClass: public Ui_exprClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPR_H
