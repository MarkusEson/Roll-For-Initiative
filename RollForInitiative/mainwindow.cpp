#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myFirstFunction();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFirstFunction()
{
    qDebug() << "Hello World!" << endl;
}
