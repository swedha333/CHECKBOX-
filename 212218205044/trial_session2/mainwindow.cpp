#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
    connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(oncheckboxclicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::oncheckboxclicked()
{
    QTextStream s(stdout);
    if(ui->checkBox->isChecked())
    {
        s<<"Option 1 is Checked\n";
    }
    else
    {
        s<<"Option 1 is Unchecked\n";
    }
    if(ui->checkBox_2->isChecked())
    {
        s<<"Option 2 is Checked\n";
    }
    else
    {
        s<<"Option 2 is Unchecked\n";
    }
    if(ui->checkBox_3->isChecked())
    {
        s<<"Option 3 is Checked\n";
    }
    else
    {
        s<<"Option 3 is Unchecked\n";
    }
}
