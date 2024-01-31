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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *b_button;
    QLineEdit *t_message;
    QPlainTextEdit *pt_chat;
    QPushButton *b_clear;
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
        b_button = new QPushButton(centralwidget);
        b_button->setObjectName(QString::fromUtf8("b_button"));
        b_button->setGeometry(QRect(300, 340, 161, 51));
        t_message = new QLineEdit(centralwidget);
        t_message->setObjectName(QString::fromUtf8("t_message"));
        t_message->setGeometry(QRect(200, 290, 411, 41));
        QFont font;
        font.setPointSize(18);
        t_message->setFont(font);
        pt_chat = new QPlainTextEdit(centralwidget);
        pt_chat->setObjectName(QString::fromUtf8("pt_chat"));
        pt_chat->setGeometry(QRect(200, 20, 411, 261));
        b_clear = new QPushButton(centralwidget);
        b_clear->setObjectName(QString::fromUtf8("b_clear"));
        b_clear->setGeometry(QRect(300, 400, 161, 31));
        b_close = new QPushButton(centralwidget);
        b_close->setObjectName(QString::fromUtf8("b_close"));
        b_close->setGeometry(QRect(300, 440, 161, 41));
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
        b_button->setText(QCoreApplication::translate("MainWindow", "Send message", nullptr));
        b_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        b_close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
