#include "taxatusmainwindow.h"
#include "ui_taxatusmainwindow.h"

TaxatusMainWindow::TaxatusMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TaxatusMainWindow)
{
    ui->setupUi(this);
}

TaxatusMainWindow::~TaxatusMainWindow()
{
    delete ui;
}

