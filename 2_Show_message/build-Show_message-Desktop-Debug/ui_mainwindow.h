/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *b_message1;
    QPushButton *b_message2;
    QPushButton *b_message3;
    QPushButton *b_message4;
    QPushButton *b_message5;
    QPushButton *b_close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        b_message1 = new QPushButton(centralwidget);
        b_message1->setObjectName(QString::fromUtf8("b_message1"));
        b_message1->setGeometry(QRect(240, 20, 241, 81));
        b_message2 = new QPushButton(centralwidget);
        b_message2->setObjectName(QString::fromUtf8("b_message2"));
        b_message2->setGeometry(QRect(240, 110, 241, 71));
        b_message3 = new QPushButton(centralwidget);
        b_message3->setObjectName(QString::fromUtf8("b_message3"));
        b_message3->setGeometry(QRect(240, 200, 241, 81));
        b_message4 = new QPushButton(centralwidget);
        b_message4->setObjectName(QString::fromUtf8("b_message4"));
        b_message4->setGeometry(QRect(240, 300, 241, 91));
        b_message5 = new QPushButton(centralwidget);
        b_message5->setObjectName(QString::fromUtf8("b_message5"));
        b_message5->setGeometry(QRect(240, 400, 241, 111));
        b_close = new QPushButton(centralwidget);
        b_close->setObjectName(QString::fromUtf8("b_close"));
        b_close->setGeometry(QRect(680, 470, 87, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
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
        b_message1->setText(QCoreApplication::translate("MainWindow", "Show_message1", nullptr));
        b_message2->setText(QCoreApplication::translate("MainWindow", "Show_message2", nullptr));
        b_message3->setText(QCoreApplication::translate("MainWindow", "Show_message3", nullptr));
        b_message4->setText(QCoreApplication::translate("MainWindow", "Show_message4", nullptr));
        b_message5->setText(QCoreApplication::translate("MainWindow", "Show_message5", nullptr));
        b_close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
