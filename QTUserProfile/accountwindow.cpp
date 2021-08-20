#include "accountwindow.h"
#include "ui_accountwindow.h"

accountWindow::accountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accountWindow)
{
    ui->setupUi(this);
}

accountWindow::~accountWindow()
{
    delete ui;
}
