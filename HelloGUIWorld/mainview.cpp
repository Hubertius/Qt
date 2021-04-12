#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainView)
{
    ui->setupUi(this);
    ui->exitButton->setText(tr("Exit now!")); // ustawianie tekstu dla przycisku
    //connect(ui->exitButton, SIGNAL(clicked()), SLOT(close())); // ustawianie zachowania, by po kliknięciu przycisku nasza aplikacja ulegała automatycznemu zamknięciu
}

MainView::~MainView()
{
    delete ui;
}

