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
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *addDiceLayout;
    QPushButton *d4Button;
    QPushButton *d6Button;
    QPushButton *d8Button;
    QPushButton *d20Button;
    QWidget *verticalLayoutWidget;
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
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *addRemovePlayerLayout;
    QPushButton *addPlayerButton;
    QPushButton *removePlayerButton;
    QWidget *gridLayoutWidget;
    QGridLayout *modifyDiceLayout;
    QLabel *amountofDiceLabel;
    QLabel *resultLabel;
    QSpinBox *bonusesButton;
    QPushButton *rollDiceButton;
    QSpinBox *addDiesButton;
    QLabel *bonusesLabel;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(495, 621);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 10, 249, 51));
        addDiceLayout = new QHBoxLayout(horizontalLayoutWidget);
        addDiceLayout->setSpacing(6);
        addDiceLayout->setContentsMargins(11, 11, 11, 11);
        addDiceLayout->setObjectName(QStringLiteral("addDiceLayout"));
        addDiceLayout->setContentsMargins(0, 0, 0, 0);
        d4Button = new QPushButton(horizontalLayoutWidget);
        d4Button->setObjectName(QStringLiteral("d4Button"));
        d4Button->setCheckable(true);

        addDiceLayout->addWidget(d4Button);

        d6Button = new QPushButton(horizontalLayoutWidget);
        d6Button->setObjectName(QStringLiteral("d6Button"));
        d6Button->setCheckable(true);

        addDiceLayout->addWidget(d6Button);

        d8Button = new QPushButton(horizontalLayoutWidget);
        d8Button->setObjectName(QStringLiteral("d8Button"));
        d8Button->setCheckable(true);

        addDiceLayout->addWidget(d8Button);

        d20Button = new QPushButton(horizontalLayoutWidget);
        d20Button->setObjectName(QStringLiteral("d20Button"));
        d20Button->setCheckable(true);

        addDiceLayout->addWidget(d20Button);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 60, 221, 531));
        playerNameLayout = new QVBoxLayout(verticalLayoutWidget);
        playerNameLayout->setSpacing(6);
        playerNameLayout->setContentsMargins(11, 11, 11, 11);
        playerNameLayout->setObjectName(QStringLiteral("playerNameLayout"));
        playerNameLayout->setContentsMargins(0, 0, 0, 0);
        name1Button = new QPushButton(verticalLayoutWidget);
        name1Button->setObjectName(QStringLiteral("name1Button"));

        playerNameLayout->addWidget(name1Button);

        name2Button = new QPushButton(verticalLayoutWidget);
        name2Button->setObjectName(QStringLiteral("name2Button"));

        playerNameLayout->addWidget(name2Button);

        name3Button = new QPushButton(verticalLayoutWidget);
        name3Button->setObjectName(QStringLiteral("name3Button"));

        playerNameLayout->addWidget(name3Button);

        name4Button = new QPushButton(verticalLayoutWidget);
        name4Button->setObjectName(QStringLiteral("name4Button"));

        playerNameLayout->addWidget(name4Button);

        name5Button = new QPushButton(verticalLayoutWidget);
        name5Button->setObjectName(QStringLiteral("name5Button"));

        playerNameLayout->addWidget(name5Button);

        name6Button = new QPushButton(verticalLayoutWidget);
        name6Button->setObjectName(QStringLiteral("name6Button"));

        playerNameLayout->addWidget(name6Button);

        name7Button = new QPushButton(verticalLayoutWidget);
        name7Button->setObjectName(QStringLiteral("name7Button"));

        playerNameLayout->addWidget(name7Button);

        name8Button = new QPushButton(verticalLayoutWidget);
        name8Button->setObjectName(QStringLiteral("name8Button"));

        playerNameLayout->addWidget(name8Button);

        name9Button = new QPushButton(verticalLayoutWidget);
        name9Button->setObjectName(QStringLiteral("name9Button"));

        playerNameLayout->addWidget(name9Button);

        name10Button = new QPushButton(verticalLayoutWidget);
        name10Button->setObjectName(QStringLiteral("name10Button"));

        playerNameLayout->addWidget(name10Button);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 228, 51));
        addRemovePlayerLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        addRemovePlayerLayout->setSpacing(6);
        addRemovePlayerLayout->setContentsMargins(11, 11, 11, 11);
        addRemovePlayerLayout->setObjectName(QStringLiteral("addRemovePlayerLayout"));
        addRemovePlayerLayout->setContentsMargins(0, 0, 0, 0);
        addPlayerButton = new QPushButton(horizontalLayoutWidget_2);
        addPlayerButton->setObjectName(QStringLiteral("addPlayerButton"));

        addRemovePlayerLayout->addWidget(addPlayerButton);

        removePlayerButton = new QPushButton(horizontalLayoutWidget_2);
        removePlayerButton->setObjectName(QStringLiteral("removePlayerButton"));

        addRemovePlayerLayout->addWidget(removePlayerButton);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(242, 60, 251, 531));
        modifyDiceLayout = new QGridLayout(gridLayoutWidget);
        modifyDiceLayout->setSpacing(6);
        modifyDiceLayout->setContentsMargins(11, 11, 11, 11);
        modifyDiceLayout->setObjectName(QStringLiteral("modifyDiceLayout"));
        modifyDiceLayout->setContentsMargins(0, 0, 0, 0);
        amountofDiceLabel = new QLabel(gridLayoutWidget);
        amountofDiceLabel->setObjectName(QStringLiteral("amountofDiceLabel"));

        modifyDiceLayout->addWidget(amountofDiceLabel, 0, 0, 1, 1);

        resultLabel = new QLabel(gridLayoutWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));

        modifyDiceLayout->addWidget(resultLabel, 5, 0, 1, 1);

        bonusesButton = new QSpinBox(gridLayoutWidget);
        bonusesButton->setObjectName(QStringLiteral("bonusesButton"));

        modifyDiceLayout->addWidget(bonusesButton, 3, 0, 1, 1);

        rollDiceButton = new QPushButton(gridLayoutWidget);
        rollDiceButton->setObjectName(QStringLiteral("rollDiceButton"));

        modifyDiceLayout->addWidget(rollDiceButton, 6, 0, 1, 1);

        addDiesButton = new QSpinBox(gridLayoutWidget);
        addDiesButton->setObjectName(QStringLiteral("addDiesButton"));

        modifyDiceLayout->addWidget(addDiesButton, 1, 0, 1, 1);

        bonusesLabel = new QLabel(gridLayoutWidget);
        bonusesLabel->setObjectName(QStringLiteral("bonusesLabel"));

        modifyDiceLayout->addWidget(bonusesLabel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        modifyDiceLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        d4Button->setText(QApplication::translate("MainWindow", "d4", Q_NULLPTR));
        d6Button->setText(QApplication::translate("MainWindow", "d6", Q_NULLPTR));
        d8Button->setText(QApplication::translate("MainWindow", "d8", Q_NULLPTR));
        d20Button->setText(QApplication::translate("MainWindow", "d20", Q_NULLPTR));
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
        addPlayerButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        removePlayerButton->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        amountofDiceLabel->setText(QApplication::translate("MainWindow", "How many dice would you like to roll?", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("MainWindow", "Throw your dice!", Q_NULLPTR));
        rollDiceButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
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
