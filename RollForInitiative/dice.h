#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <time.h>

#define d4 4
#define d6 6
#define d8 8
#define d20 20

class dice
{
public:
    dice();
    void rollDice(int typeOfDie);
    int getValue();

private:
    int _diceValue = 0;
    const int _d4 = 4;
    const int _d6 = 6;
    const int _d8 = 8;
    const int _d20 = 20;





};

#endif // DICE_H
