#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
namespace MyNamespace
{
    MainView::MainView(QWidget *parent, SetupTab& setup)
        : QMainWindow(parent),
          m_setupTab(setup),
          ui(new Ui::MainView)
    {
        ui->setupUi(this);
        m_setupTab.setParent(this);
        ui->layoutSetupTab->addWidget(&m_setupTab);
    }

    MainView::~MainView()
    {
        delete ui;
    }
}

