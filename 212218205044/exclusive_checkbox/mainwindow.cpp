#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QButtonGroup>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QButtonGroup *b=new QButtonGroup(this);
    b->addButton(ui->windowscheckbox);
    b->addButton(ui->maccheckbox);
    b->addButton(ui->linuxcheckbox);
    b->setExclusive(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_windowscheckbox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Windows Checkbox is checked!";
    }
    else
    {
        qDebug()<<"Windows Checkbox is Unchecked!";
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->windowscheckbox->isChecked())
    {
        qDebug()<<"Windows Checkbox is checked!";
    }
    else
    {
        qDebug()<<"Windows Checkbox is Unchecked!";
    }
    if(ui->maccheckbox->isChecked())
    {
        qDebug()<<"Mac Checkbox is checked!";
    }
    else
    {
        qDebug()<<"Mac Checkbox is Unchecked!";
    }
    if(ui->linuxcheckbox->isChecked())
    {
        qDebug()<<"Linux Checkbox is checked!";
    }
    else
    {
        qDebug()<<"Linux Checkbox is Unchecked!";
    }
}

//Exclusive
void MainWindow::on_pushButton_2_clicked()
{
    if(ui->windowscheckbox->isChecked())
    {
        ui->windowscheckbox->setChecked(false);
    }
    else
    {
        ui->windowscheckbox->setChecked(true);
    }
}



void MainWindow::on_groupBox_2_clicked()
{
    if(ui->checkBox_4->isChecked())
    {
        ui->checkBox_4->setChecked(false);
    }
    else
    {
        ui->checkBox_4->setChecked(true);
    }
}
