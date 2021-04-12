/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabControl;
    QHBoxLayout *horizontalLayout_2;
    QWidget *tabSetup;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *layoutSetupTab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/root/images/Images/icons8-control-panel-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainView->setWindowIcon(icon);
        centralwidget = new QWidget(MainView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabControl = new QWidget();
        tabControl->setObjectName(QString::fromUtf8("tabControl"));
        horizontalLayout_2 = new QHBoxLayout(tabControl);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabWidget->addTab(tabControl, QString());
        tabSetup = new QWidget();
        tabSetup->setObjectName(QString::fromUtf8("tabSetup"));
        horizontalLayout_3 = new QHBoxLayout(tabSetup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        layoutSetupTab = new QVBoxLayout();
        layoutSetupTab->setObjectName(QString::fromUtf8("layoutSetupTab"));

        horizontalLayout_3->addLayout(layoutSetupTab);

        tabWidget->addTab(tabSetup, QString());

        horizontalLayout->addWidget(tabWidget);

        MainView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainView->setMenuBar(menubar);
        statusbar = new QStatusBar(MainView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainView->setStatusBar(statusbar);

        retranslateUi(MainView);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QCoreApplication::translate("MainView", "Virtual Front Panel - Gating controller", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabControl), QCoreApplication::translate("MainView", "Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSetup), QCoreApplication::translate("MainView", "Setup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
