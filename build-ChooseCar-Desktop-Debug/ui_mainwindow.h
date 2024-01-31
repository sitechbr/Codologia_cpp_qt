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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_garage;
    QAction *actionQuit;
    QAction *actionDark_Theme;
    QAction *actionLight_Theme;
    QWidget *centralwidget;
    QPushButton *b_mers;
    QPushButton *b_bmw;
    QPushButton *b_audi;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu_Menu;
    QMenu *menuView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew_garage = new QAction(MainWindow);
        actionNew_garage->setObjectName(QString::fromUtf8("actionNew_garage"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_garage->setIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionDark_Theme = new QAction(MainWindow);
        actionDark_Theme->setObjectName(QString::fromUtf8("actionDark_Theme"));
        actionLight_Theme = new QAction(MainWindow);
        actionLight_Theme->setObjectName(QString::fromUtf8("actionLight_Theme"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        b_mers = new QPushButton(centralwidget);
        b_mers->setObjectName(QString::fromUtf8("b_mers"));
        b_mers->setGeometry(QRect(50, 30, 211, 221));
        b_mers->setStyleSheet(QString::fromUtf8("border-image:url(\":/rec/img/mers.png\");"));
        b_bmw = new QPushButton(centralwidget);
        b_bmw->setObjectName(QString::fromUtf8("b_bmw"));
        b_bmw->setGeometry(QRect(280, 30, 211, 221));
        b_bmw->setStyleSheet(QString::fromUtf8("border-image:url(\":/rec/img/bmw.png\");"));
        b_audi = new QPushButton(centralwidget);
        b_audi->setObjectName(QString::fromUtf8("b_audi"));
        b_audi->setGeometry(QRect(520, 30, 211, 221));
        b_audi->setStyleSheet(QString::fromUtf8("border-image:url(\":/rec/img/audi.png\");"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 260, 391, 211));
        label->setStyleSheet(QString::fromUtf8("border-image:url(\":/rec/img/shadow.png\");"));
        label->setPixmap(QPixmap(QString::fromUtf8("img/audi_car.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 490, 476, 61));
        QFont font;
        font.setUnderline(false);
        font.setStrikeOut(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; /* Green */\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 15px 32px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 40px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_Menu = new QMenu(menubar);
        menu_Menu->setObjectName(QString::fromUtf8("menu_Menu"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_Menu->menuAction());
        menubar->addAction(menuView->menuAction());
        menu_Menu->addAction(actionNew_garage);
        menu_Menu->addAction(actionQuit);
        menuView->addAction(actionDark_Theme);
        menuView->addAction(actionLight_Theme);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_garage->setText(QCoreApplication::translate("MainWindow", "New garage", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionDark_Theme->setText(QCoreApplication::translate("MainWindow", "Dark Theme", nullptr));
        actionLight_Theme->setText(QCoreApplication::translate("MainWindow", "Light Theme", nullptr));
        b_mers->setText(QString());
        b_bmw->setText(QString());
        b_audi->setText(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add car", nullptr));
        menu_Menu->setTitle(QCoreApplication::translate("MainWindow", " Menu", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
