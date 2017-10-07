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

    // My Open Functions
    int switchTypeOfDice();

private slots:
    // My Slots
    void aButtonWasClicked();
    void on_bonusesButton_valueChanged(int rollBonus);
    void on_addDiesButton_valueChanged(int numOfDice);
    void on_actionReset_Board_triggered();
    void on_actionQuit_triggered();
    void on_actionGuide_triggered();

private:
    // Variables for game.
    Ui::MainWindow *ui;
    dice _dice;

    int _diceArray[100];                     // The Array the dice rolls is saved in.
    int _howManyDiceYouWantToRoll = 0;      // Keeps track of how many dice you want to Roll.
    int _bonusToYourDiceRoll = 0;           // Keeps track of any bonuses you add to your Rolls
    int _typeOfDiceChosen = 0;              // Which dice did you click? d4 to d20

    const int _d4 = 4;                      // Values of the different Dice.
    const int _d6 = 6;
    const int _d8 = 8;
    const int _d20 = 20;

    // Private Functions

};

#endif // MAINWINDOW_H
