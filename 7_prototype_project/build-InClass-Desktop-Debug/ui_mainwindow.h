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
    QPushButton *p_1;
    QPushButton *e_1;
    QPushButton *p_2;
    QPushButton *e_2;
    QLabel *playerScore;
    QLabel *enemyScore;
    QLabel *p_1_fon;
    QLabel *e_1_fon;
    QLabel *e_2_fon;
    QLabel *p_2_fon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        p_1 = new QPushButton(centralwidget);
        p_1->setObjectName(QString::fromUtf8("p_1"));
        p_1->setGeometry(QRect(170, 120, 131, 111));
        e_1 = new QPushButton(centralwidget);
        e_1->setObjectName(QString::fromUtf8("e_1"));
        e_1->setGeometry(QRect(420, 120, 121, 121));
        p_2 = new QPushButton(centralwidget);
        p_2->setObjectName(QString::fromUtf8("p_2"));
        p_2->setGeometry(QRect(170, 290, 131, 131));
        e_2 = new QPushButton(centralwidget);
        e_2->setObjectName(QString::fromUtf8("e_2"));
        e_2->setGeometry(QRect(420, 290, 131, 131));
        playerScore = new QLabel(centralwidget);
        playerScore->setObjectName(QString::fromUtf8("playerScore"));
        playerScore->setGeometry(QRect(180, 70, 67, 17));
        enemyScore = new QLabel(centralwidget);
        enemyScore->setObjectName(QString::fromUtf8("enemyScore"));
        enemyScore->setGeometry(QRect(430, 60, 67, 17));
        p_1_fon = new QLabel(centralwidget);
        p_1_fon->setObjectName(QString::fromUtf8("p_1_fon"));
        p_1_fon->setGeometry(QRect(80, 90, 261, 181));
        p_1_fon->setStyleSheet(QString::fromUtf8("background: silver;"));
        e_1_fon = new QLabel(centralwidget);
        e_1_fon->setObjectName(QString::fromUtf8("e_1_fon"));
        e_1_fon->setGeometry(QRect(370, 90, 261, 181));
        e_1_fon->setStyleSheet(QString::fromUtf8("background: silver;"));
        e_2_fon = new QLabel(centralwidget);
        e_2_fon->setObjectName(QString::fromUtf8("e_2_fon"));
        e_2_fon->setGeometry(QRect(370, 280, 261, 181));
        e_2_fon->setStyleSheet(QString::fromUtf8("background: silver;"));
        p_2_fon = new QLabel(centralwidget);
        p_2_fon->setObjectName(QString::fromUtf8("p_2_fon"));
        p_2_fon->setGeometry(QRect(80, 280, 261, 181));
        p_2_fon->setStyleSheet(QString::fromUtf8("background: silver;"));
        MainWindow->setCentralWidget(centralwidget);
        p_2_fon->raise();
        e_1_fon->raise();
        e_2_fon->raise();
        p_1_fon->raise();
        p_1->raise();
        e_1->raise();
        p_2->raise();
        e_2->raise();
        playerScore->raise();
        enemyScore->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        p_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        e_1->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        p_2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        e_2->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        playerScore->setText(QCoreApplication::translate("MainWindow", "Player", nullptr));
        enemyScore->setText(QCoreApplication::translate("MainWindow", "Enemy", nullptr));
        p_1_fon->setText(QString());
        e_1_fon->setText(QString());
        e_2_fon->setText(QString());
        p_2_fon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
