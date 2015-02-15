/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QComboBox *portName;
    QPushButton *conectPort;
    QPushButton *closePort;
    QPushButton *writePort;
    QLineEdit *portText;
    QPushButton *robot_stop;
    QPushButton *robot_go;
    QPushButton *robot_back;
    QPushButton *robot_left;
    QPushButton *robot_right;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(577, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 290, 561, 71));
        portName = new QComboBox(centralWidget);
        portName->setObjectName(QStringLiteral("portName"));
        portName->setGeometry(QRect(10, 10, 111, 23));
        conectPort = new QPushButton(centralWidget);
        conectPort->setObjectName(QStringLiteral("conectPort"));
        conectPort->setGeometry(QRect(140, 10, 91, 23));
        closePort = new QPushButton(centralWidget);
        closePort->setObjectName(QStringLiteral("closePort"));
        closePort->setGeometry(QRect(140, 40, 91, 23));
        writePort = new QPushButton(centralWidget);
        writePort->setObjectName(QStringLiteral("writePort"));
        writePort->setGeometry(QRect(450, 10, 80, 23));
        portText = new QLineEdit(centralWidget);
        portText->setObjectName(QStringLiteral("portText"));
        portText->setGeometry(QRect(330, 10, 113, 23));
        robot_stop = new QPushButton(centralWidget);
        robot_stop->setObjectName(QStringLiteral("robot_stop"));
        robot_stop->setGeometry(QRect(180, 170, 80, 23));
        robot_go = new QPushButton(centralWidget);
        robot_go->setObjectName(QStringLiteral("robot_go"));
        robot_go->setGeometry(QRect(180, 130, 80, 23));
        robot_back = new QPushButton(centralWidget);
        robot_back->setObjectName(QStringLiteral("robot_back"));
        robot_back->setGeometry(QRect(180, 210, 80, 23));
        robot_left = new QPushButton(centralWidget);
        robot_left->setObjectName(QStringLiteral("robot_left"));
        robot_left->setGeometry(QRect(89, 170, 71, 23));
        robot_right = new QPushButton(centralWidget);
        robot_right->setObjectName(QStringLiteral("robot_right"));
        robot_right->setGeometry(QRect(280, 170, 71, 23));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(410, 200, 120, 80));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 78));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 577, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        conectPort->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        closePort->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        writePort->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", 0));
        robot_stop->setText(QApplication::translate("MainWindow", "STOP", 0));
        robot_go->setText(QApplication::translate("MainWindow", "GO", 0));
        robot_back->setText(QApplication::translate("MainWindow", "Back", 0));
        robot_left->setText(QApplication::translate("MainWindow", "Left", 0));
        robot_right->setText(QApplication::translate("MainWindow", "Right", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
