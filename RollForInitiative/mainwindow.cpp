#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "dice.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < ui->playerNameLayout->count(); i++){
        QWidget *button = ui->playerNameLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->addRemovePlayerLayout->count(); i++){
        QWidget *button = ui->addRemovePlayerLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->addDiceLayout->count(); i++){
        QWidget *button = ui->addDiceLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }
    for(int i = 0; i < ui->modifyDiceLayout->count(); i++){
        QWidget *button = ui->modifyDiceLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aButtonWasClicked()));
    }

    myFirstFunction();
}

MainWindow::~MainWindow()
{
    delete this->ui;
}

void MainWindow::aButtonWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());

    // When you click "specify Dice" Buttons
    if(theButton == ui->d4Button || theButton == ui->d6Button || theButton == ui->d8Button || theButton == ui->d20Button)
    {
        ui->d4Button->setChecked(0);
        ui->d6Button->setChecked(0);
        ui->d8Button->setChecked(0);
        ui->d20Button->setChecked(0);
        dynamic_cast<QPushButton*>(sender())->setChecked(1);

        _typeOfDiceChosen = switchTypeOfDice();
    }
    // When you click Roll Dice
    if(theButton == ui->rollDiceButton)
    {
        int diceTotValue = 0;
        for(int i = 0; i < _howManyDiceYouWantToRoll; i++)
        {
            _dice.rollDice(_typeOfDiceChosen);
            _diceArray[i] = _dice.getValue() + _bonusToYourDiceRoll;
        }
        for(int i = 0; i < _howManyDiceYouWantToRoll; i++)
            diceTotValue += _diceArray[i];

        ui->resultLabel->setText("Total: "+QString::number(diceTotValue));
    }



//    qDebug() << tot;
//    QString printout = QString::number(tot);
//    ui->resultLabel->setText(printout);


}

void MainWindow::myFirstFunction()
{
    //qDebug() << "Hello World!" << endl;
}

int MainWindow::switchTypeOfDice()
{
    if(ui->d4Button->isChecked())
        return _d4;
    else if(ui->d6Button->isChecked())
        return _d6;
    else if(ui->d8Button->isChecked())
        return _d8;
    else
        return _d20;
}

void MainWindow::on_bonusesButton_valueChanged(int rollBonus)
{
    //qDebug() << rollBonus;
    _bonusToYourDiceRoll = rollBonus;
}

void MainWindow::on_addDiesButton_valueChanged(int numOfDice)
{
    //qDebug() << numOfDice;
    _howManyDiceYouWantToRoll = numOfDice;
}
