/********************************************************************************
** Form generated from reading UI file 'QtOknoGlowne.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOKNOGLOWNE_H
#define UI_QTOKNOGLOWNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOknoGlowneClass
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *nowaPlytaButton;
    QPushButton *usunPlyteButton;
    QComboBox *comboBox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtOknoGlowneClass)
    {
        if (QtOknoGlowneClass->objectName().isEmpty())
            QtOknoGlowneClass->setObjectName(QStringLiteral("QtOknoGlowneClass"));
        QtOknoGlowneClass->resize(560, 359);
        centralWidget = new QWidget(QtOknoGlowneClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 50, 256, 241));
        nowaPlytaButton = new QPushButton(centralWidget);
        nowaPlytaButton->setObjectName(QStringLiteral("nowaPlytaButton"));
        nowaPlytaButton->setGeometry(QRect(370, 60, 111, 51));
        usunPlyteButton = new QPushButton(centralWidget);
        usunPlyteButton->setObjectName(QStringLiteral("usunPlyteButton"));
        usunPlyteButton->setGeometry(QRect(370, 230, 111, 51));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(350, 160, 141, 21));
        QtOknoGlowneClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtOknoGlowneClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtOknoGlowneClass->setStatusBar(statusBar);

        retranslateUi(QtOknoGlowneClass);
        QObject::connect(nowaPlytaButton, SIGNAL(clicked()), QtOknoGlowneClass, SLOT(dodajPlyte()));
        QObject::connect(usunPlyteButton, SIGNAL(clicked()), QtOknoGlowneClass, SLOT(usunPlyte()));

        QMetaObject::connectSlotsByName(QtOknoGlowneClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtOknoGlowneClass)
    {
        QtOknoGlowneClass->setWindowTitle(QApplication::translate("QtOknoGlowneClass", "QtOknoGlowne", Q_NULLPTR));
        nowaPlytaButton->setText(QApplication::translate("QtOknoGlowneClass", "Dodaj P\305\202yt\304\231", Q_NULLPTR));
        usunPlyteButton->setText(QApplication::translate("QtOknoGlowneClass", "Usu\305\204 P\305\202yt\304\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtOknoGlowneClass: public Ui_QtOknoGlowneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOGLOWNE_H
