#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QButtonGroup>
#include<QDebug>

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


void MainWindow::on_checkBox_toggled(bool checked)
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

void MainWindow::on_checkBox_2_toggled(bool checked)
{
    if(checked)
        {
            qDebug()<<"Mac Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Mac Checkbox is Unchecked!";
        }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
        {
            qDebug()<<"Windows Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Windows Checkbox is Unchecked!";
        }
        if(ui->checkBox_2->isChecked())
        {
            qDebug()<<"Mac Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Mac Checkbox is Unchecked!";
        }
        if(ui->checkBox_3->isChecked())
        {
            qDebug()<<"Linux Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Linux Checkbox is Unchecked!";
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
        {
            ui->checkBox_2->setChecked(false);
        }
        else
        {
            ui->checkBox_3->setChecked(true);
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
