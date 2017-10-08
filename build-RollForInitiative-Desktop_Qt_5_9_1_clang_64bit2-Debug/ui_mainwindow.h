/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset_Board;
    QAction *actionQuit;
    QAction *actionGuide;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *addRemovePlayerLayout;
    QPushButton *nextPlayerButton;
    QPushButton *resetNamesButton;
    QVBoxLayout *playerNameLayout;
    QPushButton *name1Button;
    QPushButton *name2Button;
    QPushButton *name3Button;
    QPushButton *name4Button;
    QPushButton *name5Button;
    QPushButton *name6Button;
    QPushButton *name7Button;
    QPushButton *name8Button;
    QPushButton *name9Button;
    QPushButton *name10Button;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *addDiceLayout;
    QPushButton *d4Button;
    QPushButton *d6Button;
    QPushButton *d8Button;
    QPushButton *d20Button;
    QGridLayout *modifyDiceLayout;
    QLabel *amountofDiceLabel;
    QLabel *resultLabel;
    QPushButton *rollDiceButton;
    QSpacerItem *verticalSpacer;
    QSpinBox *bonusesButton;
    QSpinBox *addDiesButton;
    QLabel *bonusesLabel;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(460, 640);
        actionReset_Board = new QAction(MainWindow);
        actionReset_Board->setObjectName(QStringLiteral("actionReset_Board"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionGuide = new QAction(MainWindow);
        actionGuide->setObjectName(QStringLiteral("actionGuide"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        addRemovePlayerLayout = new QHBoxLayout();
        addRemovePlayerLayout->setSpacing(6);
        addRemovePlayerLayout->setObjectName(QStringLiteral("addRemovePlayerLayout"));
        nextPlayerButton = new QPushButton(centralWidget);
        nextPlayerButton->setObjectName(QStringLiteral("nextPlayerButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Resources/Images/chevron-double-down (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPlayerButton->setIcon(icon);

        addRemovePlayerLayout->addWidget(nextPlayerButton);

        resetNamesButton = new QPushButton(centralWidget);
        resetNamesButton->setObjectName(QStringLiteral("resetNamesButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Resources/Images/close-box-outline (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        resetNamesButton->setIcon(icon1);

        addRemovePlayerLayout->addWidget(resetNamesButton);


        verticalLayout_2->addLayout(addRemovePlayerLayout);

        playerNameLayout = new QVBoxLayout();
        playerNameLayout->setSpacing(-1);
        playerNameLayout->setObjectName(QStringLiteral("playerNameLayout"));
        name1Button = new QPushButton(centralWidget);
        name1Button->setObjectName(QStringLiteral("name1Button"));

        playerNameLayout->addWidget(name1Button);

        name2Button = new QPushButton(centralWidget);
        name2Button->setObjectName(QStringLiteral("name2Button"));

        playerNameLayout->addWidget(name2Button);

        name3Button = new QPushButton(centralWidget);
        name3Button->setObjectName(QStringLiteral("name3Button"));

        playerNameLayout->addWidget(name3Button);

        name4Button = new QPushButton(centralWidget);
        name4Button->setObjectName(QStringLiteral("name4Button"));

        playerNameLayout->addWidget(name4Button);

        name5Button = new QPushButton(centralWidget);
        name5Button->setObjectName(QStringLiteral("name5Button"));

        playerNameLayout->addWidget(name5Button);

        name6Button = new QPushButton(centralWidget);
        name6Button->setObjectName(QStringLiteral("name6Button"));

        playerNameLayout->addWidget(name6Button);

        name7Button = new QPushButton(centralWidget);
        name7Button->setObjectName(QStringLiteral("name7Button"));

        playerNameLayout->addWidget(name7Button);

        name8Button = new QPushButton(centralWidget);
        name8Button->setObjectName(QStringLiteral("name8Button"));

        playerNameLayout->addWidget(name8Button);

        name9Button = new QPushButton(centralWidget);
        name9Button->setObjectName(QStringLiteral("name9Button"));

        playerNameLayout->addWidget(name9Button);

        name10Button = new QPushButton(centralWidget);
        name10Button->setObjectName(QStringLiteral("name10Button"));

        playerNameLayout->addWidget(name10Button);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        playerNameLayout->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(playerNameLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addDiceLayout = new QHBoxLayout();
        addDiceLayout->setSpacing(6);
        addDiceLayout->setObjectName(QStringLiteral("addDiceLayout"));
        addDiceLayout->setSizeConstraint(QLayout::SetMaximumSize);
        d4Button = new QPushButton(centralWidget);
        d4Button->setObjectName(QStringLiteral("d4Button"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Resources/Images/dice-d4BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d4Button->setIcon(icon2);
        d4Button->setCheckable(true);

        addDiceLayout->addWidget(d4Button);

        d6Button = new QPushButton(centralWidget);
        d6Button->setObjectName(QStringLiteral("d6Button"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/Resources/Images/dice-d6BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d6Button->setIcon(icon3);
        d6Button->setCheckable(true);

        addDiceLayout->addWidget(d6Button);

        d8Button = new QPushButton(centralWidget);
        d8Button->setObjectName(QStringLiteral("d8Button"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/Resources/Images/dice-d8BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d8Button->setIcon(icon4);
        d8Button->setCheckable(true);

        addDiceLayout->addWidget(d8Button);

        d20Button = new QPushButton(centralWidget);
        d20Button->setObjectName(QStringLiteral("d20Button"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Resources/Images/dice-d10BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d20Button->setIcon(icon5);
        d20Button->setCheckable(true);

        addDiceLayout->addWidget(d20Button);


        verticalLayout->addLayout(addDiceLayout);

        modifyDiceLayout = new QGridLayout();
        modifyDiceLayout->setSpacing(6);
        modifyDiceLayout->setObjectName(QStringLiteral("modifyDiceLayout"));
        amountofDiceLabel = new QLabel(centralWidget);
        amountofDiceLabel->setObjectName(QStringLiteral("amountofDiceLabel"));

        modifyDiceLayout->addWidget(amountofDiceLabel, 0, 0, 1, 1);

        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));

        modifyDiceLayout->addWidget(resultLabel, 5, 0, 1, 1);

        rollDiceButton = new QPushButton(centralWidget);
        rollDiceButton->setObjectName(QStringLiteral("rollDiceButton"));

        modifyDiceLayout->addWidget(rollDiceButton, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        modifyDiceLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        bonusesButton = new QSpinBox(centralWidget);
        bonusesButton->setObjectName(QStringLiteral("bonusesButton"));
        bonusesButton->setMaximum(100);

        modifyDiceLayout->addWidget(bonusesButton, 3, 0, 1, 1);

        addDiesButton = new QSpinBox(centralWidget);
        addDiesButton->setObjectName(QStringLiteral("addDiesButton"));
        addDiesButton->setMaximum(100);

        modifyDiceLayout->addWidget(addDiesButton, 1, 0, 1, 1);

        bonusesLabel = new QLabel(centralWidget);
        bonusesLabel->setObjectName(QStringLiteral("bonusesLabel"));

        modifyDiceLayout->addWidget(bonusesLabel, 2, 0, 1, 1);


        verticalLayout->addLayout(modifyDiceLayout);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMenu->addAction(actionReset_Board);
        menuMenu->addAction(actionQuit);
        menuHelp->addAction(actionGuide);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionReset_Board->setText(QApplication::translate("MainWindow", "Reset Board", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionGuide->setText(QApplication::translate("MainWindow", "Guide", Q_NULLPTR));
        nextPlayerButton->setText(QApplication::translate("MainWindow", "Next", Q_NULLPTR));
        resetNamesButton->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        name1Button->setText(QApplication::translate("MainWindow", "namn 1", Q_NULLPTR));
        name2Button->setText(QApplication::translate("MainWindow", "namn 2", Q_NULLPTR));
        name3Button->setText(QApplication::translate("MainWindow", "namn 3", Q_NULLPTR));
        name4Button->setText(QApplication::translate("MainWindow", "namn 4", Q_NULLPTR));
        name5Button->setText(QApplication::translate("MainWindow", "namn 5", Q_NULLPTR));
        name6Button->setText(QApplication::translate("MainWindow", "namn 6", Q_NULLPTR));
        name7Button->setText(QApplication::translate("MainWindow", "namn 7", Q_NULLPTR));
        name8Button->setText(QApplication::translate("MainWindow", "namn 8", Q_NULLPTR));
        name9Button->setText(QApplication::translate("MainWindow", "namn 9", Q_NULLPTR));
        name10Button->setText(QApplication::translate("MainWindow", "namn 10", Q_NULLPTR));
        d4Button->setText(QApplication::translate("MainWindow", "d4", Q_NULLPTR));
        d6Button->setText(QApplication::translate("MainWindow", "d6", Q_NULLPTR));
        d8Button->setText(QApplication::translate("MainWindow", "d8", Q_NULLPTR));
        d20Button->setText(QApplication::translate("MainWindow", "d20", Q_NULLPTR));
        amountofDiceLabel->setText(QApplication::translate("MainWindow", "How many dice would you like to roll?", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("MainWindow", "Throw your dice!", Q_NULLPTR));
        rollDiceButton->setText(QApplication::translate("MainWindow", "Roll the Dice!", Q_NULLPTR));
        bonusesLabel->setText(QApplication::translate("MainWindow", "Do you have any Bonuses?", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
