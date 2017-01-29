/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *helloWorld_Button;
    QListWidget *character_list;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *health_label;
    QLabel *energy_label;
    QLabel *level_label;
    QLabel *defence_label;
    QLabel *dexterity_label;
    QLabel *constitution_label;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name_lineEdit;
    QLineEdit *health_lineEdit;
    QLineEdit *energy_lineEdit;
    QLineEdit *level_lineEdit;
    QLineEdit *defence_lineEdit;
    QLineEdit *dexterity_lineEdit;
    QLineEdit *constitution_lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(578, 462);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        helloWorld_Button = new QPushButton(centralWidget);
        helloWorld_Button->setObjectName(QStringLiteral("helloWorld_Button"));
        helloWorld_Button->setGeometry(QRect(360, 330, 191, 51));
        character_list = new QListWidget(centralWidget);
        character_list->setObjectName(QStringLiteral("character_list"));
        character_list->setGeometry(QRect(370, 40, 161, 192));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 60, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        health_label = new QLabel(widget);
        health_label->setObjectName(QStringLiteral("health_label"));

        verticalLayout->addWidget(health_label);

        energy_label = new QLabel(widget);
        energy_label->setObjectName(QStringLiteral("energy_label"));

        verticalLayout->addWidget(energy_label);

        level_label = new QLabel(widget);
        level_label->setObjectName(QStringLiteral("level_label"));

        verticalLayout->addWidget(level_label);

        defence_label = new QLabel(widget);
        defence_label->setObjectName(QStringLiteral("defence_label"));

        verticalLayout->addWidget(defence_label);

        dexterity_label = new QLabel(widget);
        dexterity_label->setObjectName(QStringLiteral("dexterity_label"));

        verticalLayout->addWidget(dexterity_label);

        constitution_label = new QLabel(widget);
        constitution_label->setObjectName(QStringLiteral("constitution_label"));

        verticalLayout->addWidget(constitution_label);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(90, 10, 110, 271));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name_lineEdit = new QLineEdit(widget1);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));

        verticalLayout_2->addWidget(name_lineEdit);

        health_lineEdit = new QLineEdit(widget1);
        health_lineEdit->setObjectName(QStringLiteral("health_lineEdit"));

        verticalLayout_2->addWidget(health_lineEdit);

        energy_lineEdit = new QLineEdit(widget1);
        energy_lineEdit->setObjectName(QStringLiteral("energy_lineEdit"));

        verticalLayout_2->addWidget(energy_lineEdit);

        level_lineEdit = new QLineEdit(widget1);
        level_lineEdit->setObjectName(QStringLiteral("level_lineEdit"));

        verticalLayout_2->addWidget(level_lineEdit);

        defence_lineEdit = new QLineEdit(widget1);
        defence_lineEdit->setObjectName(QStringLiteral("defence_lineEdit"));

        verticalLayout_2->addWidget(defence_lineEdit);

        dexterity_lineEdit = new QLineEdit(widget1);
        dexterity_lineEdit->setObjectName(QStringLiteral("dexterity_lineEdit"));

        verticalLayout_2->addWidget(dexterity_lineEdit);

        constitution_lineEdit = new QLineEdit(widget1);
        constitution_lineEdit->setObjectName(QStringLiteral("constitution_lineEdit"));

        verticalLayout_2->addWidget(constitution_lineEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 578, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        helloWorld_Button->setText(QApplication::translate("MainWindow", "Hello world!", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        health_label->setText(QApplication::translate("MainWindow", "Health", Q_NULLPTR));
        energy_label->setText(QApplication::translate("MainWindow", "Energy", Q_NULLPTR));
        level_label->setText(QApplication::translate("MainWindow", "Level", Q_NULLPTR));
        defence_label->setText(QApplication::translate("MainWindow", "Defence", Q_NULLPTR));
        dexterity_label->setText(QApplication::translate("MainWindow", "Dexterity", Q_NULLPTR));
        constitution_label->setText(QApplication::translate("MainWindow", "Constitution", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
