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
    QPushButton *b_1;
    QPushButton *b_2;
    QPushButton *b_3;
    QPushButton *b_4;
    QLabel *t_player;
    QLabel *t_enemy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(523, 366);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        b_1 = new QPushButton(centralwidget);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        b_1->setGeometry(QRect(90, 60, 141, 111));
        b_2 = new QPushButton(centralwidget);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(250, 60, 141, 111));
        b_3 = new QPushButton(centralwidget);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(250, 190, 141, 111));
        b_4 = new QPushButton(centralwidget);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setEnabled(false);
        b_4->setGeometry(QRect(90, 190, 141, 111));
        t_player = new QLabel(centralwidget);
        t_player->setObjectName(QString::fromUtf8("t_player"));
        t_player->setGeometry(QRect(90, 10, 131, 41));
        t_enemy = new QLabel(centralwidget);
        t_enemy->setObjectName(QString::fromUtf8("t_enemy"));
        t_enemy->setGeometry(QRect(260, 10, 131, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 523, 22));
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
        b_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        t_player->setText(QString());
        t_enemy->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
