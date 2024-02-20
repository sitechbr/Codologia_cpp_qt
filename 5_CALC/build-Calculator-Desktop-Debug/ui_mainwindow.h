/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *t_result;
    QPushButton *b_AC;
    QPushButton *b_pm;
    QPushButton *b_percent;
    QPushButton *b_del;
    QPushButton *b_9;
    QPushButton *b_8;
    QPushButton *b_7;
    QPushButton *b_pr;
    QPushButton *b_6;
    QPushButton *b_5;
    QPushButton *b_4;
    QPushButton *b_min;
    QPushButton *b_3;
    QPushButton *b_2;
    QPushButton *b_1;
    QPushButton *b_plus;
    QPushButton *b_p;
    QPushButton *b_0;
    QPushButton *b_eq;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        t_result = new QLabel(centralwidget);
        t_result->setObjectName(QString::fromUtf8("t_result"));
        t_result->setGeometry(QRect(40, 10, 311, 61));
        QFont font;
        font.setPointSize(20);
        t_result->setFont(font);
        t_result->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment:'AlignVCenter | AlignRight';\n"
"border-bottom: 1px solid gray;\n"
"} \n"
"background-color:white;\n"
""));
        b_AC = new QPushButton(centralwidget);
        b_AC->setObjectName(QString::fromUtf8("b_AC"));
        b_AC->setGeometry(QRect(40, 90, 70, 70));
        b_pm = new QPushButton(centralwidget);
        b_pm->setObjectName(QString::fromUtf8("b_pm"));
        b_pm->setGeometry(QRect(120, 90, 70, 70));
        b_percent = new QPushButton(centralwidget);
        b_percent->setObjectName(QString::fromUtf8("b_percent"));
        b_percent->setGeometry(QRect(200, 90, 70, 70));
        b_del = new QPushButton(centralwidget);
        b_del->setObjectName(QString::fromUtf8("b_del"));
        b_del->setGeometry(QRect(280, 90, 70, 70));
        b_9 = new QPushButton(centralwidget);
        b_9->setObjectName(QString::fromUtf8("b_9"));
        b_9->setGeometry(QRect(200, 180, 70, 70));
        b_8 = new QPushButton(centralwidget);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        b_8->setGeometry(QRect(120, 180, 70, 70));
        b_7 = new QPushButton(centralwidget);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        b_7->setGeometry(QRect(40, 180, 70, 70));
        b_pr = new QPushButton(centralwidget);
        b_pr->setObjectName(QString::fromUtf8("b_pr"));
        b_pr->setGeometry(QRect(280, 180, 70, 70));
        b_6 = new QPushButton(centralwidget);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        b_6->setGeometry(QRect(200, 270, 70, 70));
        b_5 = new QPushButton(centralwidget);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        b_5->setGeometry(QRect(120, 270, 70, 70));
        b_4 = new QPushButton(centralwidget);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setGeometry(QRect(40, 270, 70, 70));
        b_min = new QPushButton(centralwidget);
        b_min->setObjectName(QString::fromUtf8("b_min"));
        b_min->setGeometry(QRect(280, 270, 70, 70));
        b_3 = new QPushButton(centralwidget);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(200, 360, 70, 70));
        b_2 = new QPushButton(centralwidget);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(120, 360, 70, 70));
        b_1 = new QPushButton(centralwidget);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        b_1->setGeometry(QRect(40, 360, 70, 70));
        b_plus = new QPushButton(centralwidget);
        b_plus->setObjectName(QString::fromUtf8("b_plus"));
        b_plus->setGeometry(QRect(280, 360, 70, 70));
        b_p = new QPushButton(centralwidget);
        b_p->setObjectName(QString::fromUtf8("b_p"));
        b_p->setGeometry(QRect(200, 450, 70, 70));
        b_0 = new QPushButton(centralwidget);
        b_0->setObjectName(QString::fromUtf8("b_0"));
        b_0->setGeometry(QRect(40, 450, 151, 70));
        b_eq = new QPushButton(centralwidget);
        b_eq->setObjectName(QString::fromUtf8("b_eq"));
        b_eq->setGeometry(QRect(280, 450, 70, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        t_result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        b_pm->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        b_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        b_del->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        b_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        b_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b_pr->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        b_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b_min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        b_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        b_p->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        b_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        b_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
