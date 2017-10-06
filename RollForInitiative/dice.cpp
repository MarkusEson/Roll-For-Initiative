#include "dice.h"
#include <QDebug>

dice::dice()
{
    srand(time(NULL));
}

void dice::rollDice(int typeOfDie)
{
    switch(typeOfDie)
    {
    case d4:
    {
        _diceValue = rand() % 4 + 1;
        break;
    }
    case d6:
    {
        _diceValue = rand() % 6 + 1;
        break;
    }
    case d8:
    {
        _diceValue = rand() % 8 + 1;
        break;
    }
    case d20:
    {
        _diceValue = rand() % 20 + 1;
        break;
    }
    }
}

int dice::getValue()
{
    return _diceValue;
}

