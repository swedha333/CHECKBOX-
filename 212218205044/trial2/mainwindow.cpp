#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"Apple is checked!!"<<Qt::endl;
    }
    else
    {
        stream<<"Apple is unchecked!!"<<Qt::endl;
    }

}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Orange is checked!!"<<Qt::endl;
    }
    else
    {
        stream<<"Orange is unchecked!!"<<Qt::endl;
    }

}

void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Mango is checked!!"<<Qt::endl;
    }
    else
    {
        stream<<"Mango is unchecked!!"<<Qt::endl;
    }
}
