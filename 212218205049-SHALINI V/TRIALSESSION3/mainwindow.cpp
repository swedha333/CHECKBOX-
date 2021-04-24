#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

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
    if(ui->checkBox->isChecked()){
        stream<<"MACROONS IS CHECKED"<<Qt::endl;}
    else{
        stream<<"MACROONS IS UNCHECKED"<<Qt::endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked()){
        stream<<"PONI POORI IS CHECKED"<<Qt::endl;}
    else{
        stream<<"PONI POORI IS UNCHECKED"<<Qt::endl;
    }
}


void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked()){
        stream<<"PAV BHAJI IS CHECKED"<<Qt::endl;
    }
    else{
        stream<<"PAV BHAJI IS UNCHECKED"<<Qt::endl;
    }
}
