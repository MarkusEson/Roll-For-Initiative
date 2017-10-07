#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dice.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void myFirstFunction();
    int switchTypeOfDice();

private slots:
    void aButtonWasClicked();
    void on_bonusesButton_valueChanged(int rollBonus);
    void on_addDiesButton_valueChanged(int numOfDice);

    void on_actionReset_Board_triggered();

    void on_actionQuit_triggered();

    void on_actionGuide_triggered();

private:
    Ui::MainWindow *ui;
    dice _dice;
    int _diceArray[50];

    int _howManyDiceYouWantToRoll = 0;
    int _bonusToYourDiceRoll = 0;
    int _typeOfDiceChosen = 0;
    const int _d4 = 4;
    const int _d6 = 6;
    const int _d8 = 8;
    const int _d20 = 20;
};

#endif // MAINWINDOW_H
