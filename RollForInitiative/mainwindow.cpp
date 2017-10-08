#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "dice.h"
#include <QInputDialog>
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 0; i < ui->playerNameLayout->count(); i++){
        QWidget *button = ui->playerNameLayout->itemAt(i)->widget();
        connect(button, SIGNAL(clicked()), this, SLOT(aNamePlateWasClicked()));
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

    if(theButton == ui->nextPlayerButton)
    {
        // changes to next player
        nextPlayerTurn();
    }
    if(theButton == ui->resetNamesButton)
    {
        // resets names when clicked
        resetNamePlates();
    }






}

void MainWindow::aNamePlateWasClicked()
{
    QPushButton *theButton = dynamic_cast<QPushButton*>(sender());


    // on click open Dialog Window to set name to clicked button.
    bool ok;
    QString nameToNamePlate = QInputDialog::getText(this, "Change Name",
                                                    "Enter Name",
                                                    QLineEdit::Normal,
                                                    "", &ok);


    // changes names of players and enemies
   if(theButton == ui->renamePlayer1)
       ui->name1Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer2)
       ui->name2Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer3)
       ui->name3Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer4)
       ui->name4Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer5)
       ui->name5Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer6)
       ui->name6Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer7)
       ui->name7Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer8)
       ui->name8Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer9)
       ui->name9Label->setText(nameToNamePlate);
   if(theButton == ui->renamePlayer10)
       ui->name10Label->setText(nameToNamePlate);

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

void MainWindow::resetNamePlates()
{
    QMessageBox cancelWindow;
    cancelWindow.setText("You are about to reset all the player and enemy names.");
    cancelWindow.setInformativeText("Do you want to reset all the names?");
    cancelWindow.setStandardButtons(QMessageBox::No | QMessageBox::Yes);


    int choice = cancelWindow.exec();
    if(choice == QMessageBox::No)
    {
        qDebug() << "dont reset";
    }
    if(choice == QMessageBox::Yes)
    {
        ui->name1Label->setText("");
        ui->name2Label->setText("");
        ui->name3Label->setText("");
        ui->name4Label->setText("");
        ui->name5Label->setText("");
        ui->name6Label->setText("");
        ui->name7Label->setText("");
        ui->name8Label->setText("");
        ui->name9Label->setText("");
        ui->name10Label->setText("");
    }
}

void MainWindow::nextPlayerTurn()
{

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

void MainWindow::on_actionReset_Board_triggered()
{

}

void MainWindow::on_actionQuit_triggered()
{

}

void MainWindow::on_actionGuide_triggered()
{

}
