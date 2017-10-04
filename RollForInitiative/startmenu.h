#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "ui_startmenu.h"

namespace Ui {
class StartMenu;
}

class StartMenu : QDialog
{
    Q_OBJECT
public:
    StartMenu(QWidget *parent = 0);
    ~StartMenu();

private:
    Ui::StartMenu *ui;
};

#endif // STARTMENU_H
