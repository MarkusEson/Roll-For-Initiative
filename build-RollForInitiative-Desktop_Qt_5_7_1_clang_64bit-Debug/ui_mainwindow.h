/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *addRemovePlayerLayout;
    QPushButton *nextPlayerButton;
    QPushButton *resetNamesButton;
    QGridLayout *playerNameLayout;
    QLabel *initiativeLabel;
    QLabel *name6Label;
    QPushButton *renamePlayer10;
    QLabel *renameLabel;
    QPushButton *pushButton_17;
    QLabel *name3Label;
    QPushButton *pushButton_11;
    QLabel *name9Label;
    QPushButton *renamePlayer5;
    QLabel *nameLabel;
    QPushButton *renamePlayer1;
    QLabel *name4Label;
    QPushButton *renamePlayer6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QLabel *name1Label;
    QPushButton *renamePlayer9;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *renamePlayer4;
    QLabel *name10Label;
    QLabel *name7Label;
    QLabel *name8Label;
    QLabel *name5Label;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *renamePlayer3;
    QPushButton *renamePlayer2;
    QPushButton *pushButton_19;
    QPushButton *renamePlayer8;
    QPushButton *renamePlayer7;
    QPushButton *pushButton_20;
    QLabel *name2Label;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *addDiceLayout;
    QPushButton *d4Button;
    QPushButton *d6Button;
    QPushButton *d8Button;
    QPushButton *d20Button;
    QGridLayout *modifyDiceLayout;
    QLabel *resultLabel;
    QLabel *amountofDiceLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *rollDiceButton;
    QSpinBox *bonusesButton;
    QLabel *bonusesLabel;
    QSpinBox *addDiesButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(559, 640);
        actionReset_Board = new QAction(MainWindow);
        actionReset_Board->setObjectName(QStringLiteral("actionReset_Board"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionGuide = new QAction(MainWindow);
        actionGuide->setObjectName(QStringLiteral("actionGuide"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
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

        playerNameLayout = new QGridLayout();
        playerNameLayout->setSpacing(6);
        playerNameLayout->setObjectName(QStringLiteral("playerNameLayout"));
        playerNameLayout->setHorizontalSpacing(-1);
        initiativeLabel = new QLabel(centralWidget);
        initiativeLabel->setObjectName(QStringLiteral("initiativeLabel"));

        playerNameLayout->addWidget(initiativeLabel, 0, 2, 1, 1);

        name6Label = new QLabel(centralWidget);
        name6Label->setObjectName(QStringLiteral("name6Label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name6Label->sizePolicy().hasHeightForWidth());
        name6Label->setSizePolicy(sizePolicy);
        name6Label->setMinimumSize(QSize(150, 30));
        name6Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name6Label, 6, 0, 1, 1);

        renamePlayer10 = new QPushButton(centralWidget);
        renamePlayer10->setObjectName(QStringLiteral("renamePlayer10"));
        renamePlayer10->setMinimumSize(QSize(30, 30));
        renamePlayer10->setMaximumSize(QSize(30, 30));
        renamePlayer10->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Resources/Images/plusBIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        renamePlayer10->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer10, 10, 1, 1, 1);

        renameLabel = new QLabel(centralWidget);
        renameLabel->setObjectName(QStringLiteral("renameLabel"));

        playerNameLayout->addWidget(renameLabel, 0, 1, 1, 1);

        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(30, 30));
        pushButton_17->setMaximumSize(QSize(30, 30));
        pushButton_17->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/Resources/Images/dice-multipleBIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_17, 7, 2, 1, 1);

        name3Label = new QLabel(centralWidget);
        name3Label->setObjectName(QStringLiteral("name3Label"));
        sizePolicy.setHeightForWidth(name3Label->sizePolicy().hasHeightForWidth());
        name3Label->setSizePolicy(sizePolicy);
        name3Label->setMinimumSize(QSize(150, 30));
        name3Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name3Label, 3, 0, 1, 1);

        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(30, 30));
        pushButton_11->setMaximumSize(QSize(30, 30));
        pushButton_11->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_11->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_11, 1, 2, 1, 1);

        name9Label = new QLabel(centralWidget);
        name9Label->setObjectName(QStringLiteral("name9Label"));
        sizePolicy.setHeightForWidth(name9Label->sizePolicy().hasHeightForWidth());
        name9Label->setSizePolicy(sizePolicy);
        name9Label->setMinimumSize(QSize(150, 30));
        name9Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name9Label, 9, 0, 1, 1);

        renamePlayer5 = new QPushButton(centralWidget);
        renamePlayer5->setObjectName(QStringLiteral("renamePlayer5"));
        renamePlayer5->setMinimumSize(QSize(30, 30));
        renamePlayer5->setMaximumSize(QSize(30, 30));
        renamePlayer5->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer5->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer5, 5, 1, 1, 1);

        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        playerNameLayout->addWidget(nameLabel, 0, 0, 1, 1);

        renamePlayer1 = new QPushButton(centralWidget);
        renamePlayer1->setObjectName(QStringLiteral("renamePlayer1"));
        renamePlayer1->setMinimumSize(QSize(30, 30));
        renamePlayer1->setMaximumSize(QSize(30, 30));
        renamePlayer1->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer1->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer1, 1, 1, 1, 1);

        name4Label = new QLabel(centralWidget);
        name4Label->setObjectName(QStringLiteral("name4Label"));
        sizePolicy.setHeightForWidth(name4Label->sizePolicy().hasHeightForWidth());
        name4Label->setSizePolicy(sizePolicy);
        name4Label->setMinimumSize(QSize(150, 30));
        name4Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name4Label, 4, 0, 1, 1);

        renamePlayer6 = new QPushButton(centralWidget);
        renamePlayer6->setObjectName(QStringLiteral("renamePlayer6"));
        renamePlayer6->setMinimumSize(QSize(30, 30));
        renamePlayer6->setMaximumSize(QSize(30, 30));
        renamePlayer6->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer6->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer6, 6, 1, 1, 1);

        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(30, 30));
        pushButton_13->setMaximumSize(QSize(30, 30));
        pushButton_13->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_13->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_13, 3, 2, 1, 1);

        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(30, 30));
        pushButton_12->setMaximumSize(QSize(30, 30));
        pushButton_12->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_12->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        name1Label = new QLabel(centralWidget);
        name1Label->setObjectName(QStringLiteral("name1Label"));
        sizePolicy.setHeightForWidth(name1Label->sizePolicy().hasHeightForWidth());
        name1Label->setSizePolicy(sizePolicy);
        name1Label->setMinimumSize(QSize(150, 30));
        name1Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name1Label, 1, 0, 1, 1);

        renamePlayer9 = new QPushButton(centralWidget);
        renamePlayer9->setObjectName(QStringLiteral("renamePlayer9"));
        renamePlayer9->setMinimumSize(QSize(30, 30));
        renamePlayer9->setMaximumSize(QSize(30, 30));
        renamePlayer9->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer9->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer9, 9, 1, 1, 1);

        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(30, 30));
        pushButton_14->setMaximumSize(QSize(30, 30));
        pushButton_14->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_14->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(30, 30));
        pushButton_15->setMaximumSize(QSize(30, 30));
        pushButton_15->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_15->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_15, 5, 2, 1, 1);

        renamePlayer4 = new QPushButton(centralWidget);
        renamePlayer4->setObjectName(QStringLiteral("renamePlayer4"));
        renamePlayer4->setMinimumSize(QSize(30, 30));
        renamePlayer4->setMaximumSize(QSize(30, 30));
        renamePlayer4->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer4->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer4, 4, 1, 1, 1);

        name10Label = new QLabel(centralWidget);
        name10Label->setObjectName(QStringLiteral("name10Label"));
        sizePolicy.setHeightForWidth(name10Label->sizePolicy().hasHeightForWidth());
        name10Label->setSizePolicy(sizePolicy);
        name10Label->setMinimumSize(QSize(150, 30));
        name10Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name10Label, 10, 0, 1, 1);

        name7Label = new QLabel(centralWidget);
        name7Label->setObjectName(QStringLiteral("name7Label"));
        sizePolicy.setHeightForWidth(name7Label->sizePolicy().hasHeightForWidth());
        name7Label->setSizePolicy(sizePolicy);
        name7Label->setMinimumSize(QSize(150, 30));
        name7Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name7Label, 7, 0, 1, 1);

        name8Label = new QLabel(centralWidget);
        name8Label->setObjectName(QStringLiteral("name8Label"));
        sizePolicy.setHeightForWidth(name8Label->sizePolicy().hasHeightForWidth());
        name8Label->setSizePolicy(sizePolicy);
        name8Label->setMinimumSize(QSize(150, 30));
        name8Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name8Label, 8, 0, 1, 1);

        name5Label = new QLabel(centralWidget);
        name5Label->setObjectName(QStringLiteral("name5Label"));
        sizePolicy.setHeightForWidth(name5Label->sizePolicy().hasHeightForWidth());
        name5Label->setSizePolicy(sizePolicy);
        name5Label->setMinimumSize(QSize(150, 30));
        name5Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name5Label, 5, 0, 1, 1);

        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(30, 30));
        pushButton_16->setMaximumSize(QSize(30, 30));
        pushButton_16->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_16->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_16, 6, 2, 1, 1);

        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(30, 30));
        pushButton_18->setMaximumSize(QSize(30, 30));
        pushButton_18->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_18->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_18, 8, 2, 1, 1);

        renamePlayer3 = new QPushButton(centralWidget);
        renamePlayer3->setObjectName(QStringLiteral("renamePlayer3"));
        renamePlayer3->setMinimumSize(QSize(30, 30));
        renamePlayer3->setMaximumSize(QSize(30, 30));
        renamePlayer3->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer3->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer3, 3, 1, 1, 1);

        renamePlayer2 = new QPushButton(centralWidget);
        renamePlayer2->setObjectName(QStringLiteral("renamePlayer2"));
        renamePlayer2->setMinimumSize(QSize(30, 30));
        renamePlayer2->setMaximumSize(QSize(30, 30));
        renamePlayer2->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer2->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer2, 2, 1, 1, 1);

        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(30, 30));
        pushButton_19->setMaximumSize(QSize(30, 30));
        pushButton_19->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_19->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_19, 9, 2, 1, 1);

        renamePlayer8 = new QPushButton(centralWidget);
        renamePlayer8->setObjectName(QStringLiteral("renamePlayer8"));
        renamePlayer8->setMinimumSize(QSize(30, 30));
        renamePlayer8->setMaximumSize(QSize(30, 30));
        renamePlayer8->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer8->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer8, 8, 1, 1, 1);

        renamePlayer7 = new QPushButton(centralWidget);
        renamePlayer7->setObjectName(QStringLiteral("renamePlayer7"));
        renamePlayer7->setMinimumSize(QSize(30, 30));
        renamePlayer7->setMaximumSize(QSize(30, 30));
        renamePlayer7->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        renamePlayer7->setIcon(icon2);

        playerNameLayout->addWidget(renamePlayer7, 7, 1, 1, 1);

        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setMinimumSize(QSize(30, 30));
        pushButton_20->setMaximumSize(QSize(30, 30));
        pushButton_20->setStyleSheet(QStringLiteral("border-radius: 10px;"));
        pushButton_20->setIcon(icon3);

        playerNameLayout->addWidget(pushButton_20, 10, 2, 1, 1);

        name2Label = new QLabel(centralWidget);
        name2Label->setObjectName(QStringLiteral("name2Label"));
        sizePolicy.setHeightForWidth(name2Label->sizePolicy().hasHeightForWidth());
        name2Label->setSizePolicy(sizePolicy);
        name2Label->setMinimumSize(QSize(150, 30));
        name2Label->setAlignment(Qt::AlignCenter);

        playerNameLayout->addWidget(name2Label, 2, 0, 1, 1);


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
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        addDiceLayout = new QHBoxLayout();
        addDiceLayout->setSpacing(6);
        addDiceLayout->setObjectName(QStringLiteral("addDiceLayout"));
        addDiceLayout->setSizeConstraint(QLayout::SetMaximumSize);
        d4Button = new QPushButton(centralWidget);
        d4Button->setObjectName(QStringLiteral("d4Button"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/Resources/Images/dice-d4BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d4Button->setIcon(icon4);
        d4Button->setCheckable(true);

        addDiceLayout->addWidget(d4Button);

        d6Button = new QPushButton(centralWidget);
        d6Button->setObjectName(QStringLiteral("d6Button"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Resources/Images/dice-d6BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d6Button->setIcon(icon5);
        d6Button->setCheckable(true);

        addDiceLayout->addWidget(d6Button);

        d8Button = new QPushButton(centralWidget);
        d8Button->setObjectName(QStringLiteral("d8Button"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images/Resources/Images/dice-d8BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d8Button->setIcon(icon6);
        d8Button->setCheckable(true);

        addDiceLayout->addWidget(d8Button);

        d20Button = new QPushButton(centralWidget);
        d20Button->setObjectName(QStringLiteral("d20Button"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images/Resources/Images/dice-d10BIG.png"), QSize(), QIcon::Normal, QIcon::Off);
        d20Button->setIcon(icon7);
        d20Button->setCheckable(true);

        addDiceLayout->addWidget(d20Button);


        verticalLayout->addLayout(addDiceLayout);

        modifyDiceLayout = new QGridLayout();
        modifyDiceLayout->setSpacing(6);
        modifyDiceLayout->setObjectName(QStringLiteral("modifyDiceLayout"));
        resultLabel = new QLabel(centralWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));

        modifyDiceLayout->addWidget(resultLabel, 5, 0, 1, 1);

        amountofDiceLabel = new QLabel(centralWidget);
        amountofDiceLabel->setObjectName(QStringLiteral("amountofDiceLabel"));

        modifyDiceLayout->addWidget(amountofDiceLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        modifyDiceLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        rollDiceButton = new QPushButton(centralWidget);
        rollDiceButton->setObjectName(QStringLiteral("rollDiceButton"));

        modifyDiceLayout->addWidget(rollDiceButton, 6, 0, 1, 1);

        bonusesButton = new QSpinBox(centralWidget);
        bonusesButton->setObjectName(QStringLiteral("bonusesButton"));
        bonusesButton->setMaximum(100);

        modifyDiceLayout->addWidget(bonusesButton, 3, 0, 1, 1);

        bonusesLabel = new QLabel(centralWidget);
        bonusesLabel->setObjectName(QStringLiteral("bonusesLabel"));

        modifyDiceLayout->addWidget(bonusesLabel, 2, 0, 1, 1);

        addDiesButton = new QSpinBox(centralWidget);
        addDiesButton->setObjectName(QStringLiteral("addDiesButton"));
        addDiesButton->setMaximum(100);

        modifyDiceLayout->addWidget(addDiesButton, 1, 0, 1, 1);


        verticalLayout->addLayout(modifyDiceLayout);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 22));
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
        initiativeLabel->setText(QApplication::translate("MainWindow", "Initiative", Q_NULLPTR));
        name6Label->setText(QApplication::translate("MainWindow", "Name 6", Q_NULLPTR));
        renamePlayer10->setText(QString());
        renameLabel->setText(QApplication::translate("MainWindow", "re-name", Q_NULLPTR));
        pushButton_17->setText(QString());
        name3Label->setText(QApplication::translate("MainWindow", "Name 3", Q_NULLPTR));
        pushButton_11->setText(QString());
        name9Label->setText(QApplication::translate("MainWindow", "Name 9", Q_NULLPTR));
        renamePlayer5->setText(QString());
        nameLabel->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        renamePlayer1->setText(QString());
        name4Label->setText(QApplication::translate("MainWindow", "Name 4", Q_NULLPTR));
        renamePlayer6->setText(QString());
        pushButton_13->setText(QString());
        pushButton_12->setText(QString());
        name1Label->setText(QApplication::translate("MainWindow", "Name 1", Q_NULLPTR));
        renamePlayer9->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        renamePlayer4->setText(QString());
        name10Label->setText(QApplication::translate("MainWindow", "Name 10", Q_NULLPTR));
        name7Label->setText(QApplication::translate("MainWindow", "Name 7", Q_NULLPTR));
        name8Label->setText(QApplication::translate("MainWindow", "Name 8", Q_NULLPTR));
        name5Label->setText(QApplication::translate("MainWindow", "Name 5", Q_NULLPTR));
        pushButton_16->setText(QString());
        pushButton_18->setText(QString());
        renamePlayer3->setText(QString());
        renamePlayer2->setText(QString());
        pushButton_19->setText(QString());
        renamePlayer8->setText(QString());
        renamePlayer7->setText(QString());
        pushButton_20->setText(QString());
        name2Label->setText(QApplication::translate("MainWindow", "Name 2", Q_NULLPTR));
        d4Button->setText(QApplication::translate("MainWindow", "d4", Q_NULLPTR));
        d6Button->setText(QApplication::translate("MainWindow", "d6", Q_NULLPTR));
        d8Button->setText(QApplication::translate("MainWindow", "d8", Q_NULLPTR));
        d20Button->setText(QApplication::translate("MainWindow", "d20", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("MainWindow", "Throw your dice!", Q_NULLPTR));
        amountofDiceLabel->setText(QApplication::translate("MainWindow", "How many dice would you like to roll?", Q_NULLPTR));
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
