/********************************************************************************
** Form generated from reading UI file 'setuptab.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPTAB_H
#define UI_SETUPTAB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupTab
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbTcIp;
    QHBoxLayout *loTcIpGroup;
    QHBoxLayout *loConnect;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QVBoxLayout *loAdress;
    QLabel *lbIpAdress;
    QLineEdit *editIpAdress;
    QVBoxLayout *loPort;
    QLabel *lbPort;
    QLineEdit *editPort;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gbDirectCommands;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmdCommandBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *receiveButton;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *gbInstrumentBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textInstrumentBox;
    QPushButton *btnClear;

    void setupUi(QWidget *SetupTab)
    {
        if (SetupTab->objectName().isEmpty())
            SetupTab->setObjectName(QString::fromUtf8("SetupTab"));
        SetupTab->resize(783, 523);
        verticalLayout = new QVBoxLayout(SetupTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbTcIp = new QGroupBox(SetupTab);
        gbTcIp->setObjectName(QString::fromUtf8("gbTcIp"));
        loTcIpGroup = new QHBoxLayout(gbTcIp);
        loTcIpGroup->setObjectName(QString::fromUtf8("loTcIpGroup"));
        loConnect = new QHBoxLayout();
        loConnect->setObjectName(QString::fromUtf8("loConnect"));
        connectButton = new QPushButton(gbTcIp);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/root/images/Images/icons8-connect-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon);

        loConnect->addWidget(connectButton);

        disconnectButton = new QPushButton(gbTcIp);
        disconnectButton->setObjectName(QString::fromUtf8("disconnectButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/root/images/Images/icons8-disconnected-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        disconnectButton->setIcon(icon1);

        loConnect->addWidget(disconnectButton);


        loTcIpGroup->addLayout(loConnect);

        loAdress = new QVBoxLayout();
        loAdress->setObjectName(QString::fromUtf8("loAdress"));
        loAdress->setContentsMargins(-1, 0, -1, 0);
        lbIpAdress = new QLabel(gbTcIp);
        lbIpAdress->setObjectName(QString::fromUtf8("lbIpAdress"));
        QFont font;
        font.setBold(true);
        lbIpAdress->setFont(font);

        loAdress->addWidget(lbIpAdress);

        editIpAdress = new QLineEdit(gbTcIp);
        editIpAdress->setObjectName(QString::fromUtf8("editIpAdress"));

        loAdress->addWidget(editIpAdress);


        loTcIpGroup->addLayout(loAdress);

        loPort = new QVBoxLayout();
        loPort->setObjectName(QString::fromUtf8("loPort"));
        loPort->setContentsMargins(-1, 0, -1, 0);
        lbPort = new QLabel(gbTcIp);
        lbPort->setObjectName(QString::fromUtf8("lbPort"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        lbPort->setFont(font1);

        loPort->addWidget(lbPort);

        editPort = new QLineEdit(gbTcIp);
        editPort->setObjectName(QString::fromUtf8("editPort"));

        loPort->addWidget(editPort);


        loTcIpGroup->addLayout(loPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        loTcIpGroup->addItem(horizontalSpacer);


        verticalLayout->addWidget(gbTcIp);

        gbDirectCommands = new QGroupBox(SetupTab);
        gbDirectCommands->setObjectName(QString::fromUtf8("gbDirectCommands"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbDirectCommands->sizePolicy().hasHeightForWidth());
        gbDirectCommands->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(gbDirectCommands);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmdCommandBox = new QComboBox(gbDirectCommands);
        cmdCommandBox->setObjectName(QString::fromUtf8("cmdCommandBox"));
        sizePolicy.setHeightForWidth(cmdCommandBox->sizePolicy().hasHeightForWidth());
        cmdCommandBox->setSizePolicy(sizePolicy);
        cmdCommandBox->setEditable(true);

        horizontalLayout->addWidget(cmdCommandBox);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sendButton = new QPushButton(gbDirectCommands);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/icons8-send-letter-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon2);

        horizontalLayout->addWidget(sendButton);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        receiveButton = new QPushButton(gbDirectCommands);
        receiveButton->setObjectName(QString::fromUtf8("receiveButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/icons8-info-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        receiveButton->setIcon(icon3);

        horizontalLayout->addWidget(receiveButton);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(gbDirectCommands);

        gbInstrumentBox = new QGroupBox(SetupTab);
        gbInstrumentBox->setObjectName(QString::fromUtf8("gbInstrumentBox"));
        horizontalLayout_3 = new QHBoxLayout(gbInstrumentBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textInstrumentBox = new QTextEdit(gbInstrumentBox);
        textInstrumentBox->setObjectName(QString::fromUtf8("textInstrumentBox"));
        textInstrumentBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(250);
        sizePolicy2.setHeightForWidth(textInstrumentBox->sizePolicy().hasHeightForWidth());
        textInstrumentBox->setSizePolicy(sizePolicy2);
        textInstrumentBox->setMinimumSize(QSize(519, 0));

        horizontalLayout_2->addWidget(textInstrumentBox, 0, Qt::AlignLeft|Qt::AlignTop);

        btnClear = new QPushButton(gbInstrumentBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/icons8-eraser-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon4);

        horizontalLayout_2->addWidget(btnClear, 0, Qt::AlignVCenter);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(gbInstrumentBox);

#if QT_CONFIG(shortcut)
        lbIpAdress->setBuddy(editIpAdress);
        lbPort->setBuddy(editPort);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SetupTab);

        QMetaObject::connectSlotsByName(SetupTab);
    } // setupUi

    void retranslateUi(QWidget *SetupTab)
    {
        SetupTab->setWindowTitle(QCoreApplication::translate("SetupTab", "Form", nullptr));
        gbTcIp->setTitle(QCoreApplication::translate("SetupTab", "Tcp/Ip", nullptr));
        connectButton->setText(QCoreApplication::translate("SetupTab", "Connect", nullptr));
        disconnectButton->setText(QCoreApplication::translate("SetupTab", "Disconnect", nullptr));
        lbIpAdress->setText(QCoreApplication::translate("SetupTab", "&Ip Adress", nullptr));
        lbPort->setText(QCoreApplication::translate("SetupTab", "&Port", nullptr));
        gbDirectCommands->setTitle(QCoreApplication::translate("SetupTab", "Direct Commands", nullptr));
        sendButton->setText(QCoreApplication::translate("SetupTab", "Send", nullptr));
        receiveButton->setText(QCoreApplication::translate("SetupTab", "Receive", nullptr));
        gbInstrumentBox->setTitle(QCoreApplication::translate("SetupTab", "Instrument Messages", nullptr));
        btnClear->setText(QCoreApplication::translate("SetupTab", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupTab: public Ui_SetupTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPTAB_H
