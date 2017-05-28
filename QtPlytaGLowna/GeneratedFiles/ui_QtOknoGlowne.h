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
    QListView *listaPlyt;
    QPushButton *nowaPlyta;
    QPushButton *usunPlyte;
    QComboBox *comboBox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtOknoGlowneClass)
    {
        if (QtOknoGlowneClass->objectName().isEmpty())
            QtOknoGlowneClass->setObjectName(QStringLiteral("QtOknoGlowneClass"));
        QtOknoGlowneClass->resize(560, 359);
        centralWidget = new QWidget(QtOknoGlowneClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listaPlyt = new QListView(centralWidget);
        listaPlyt->setObjectName(QStringLiteral("listaPlyt"));
        listaPlyt->setGeometry(QRect(40, 50, 256, 241));
        nowaPlyta = new QPushButton(centralWidget);
        nowaPlyta->setObjectName(QStringLiteral("nowaPlyta"));
        nowaPlyta->setGeometry(QRect(370, 60, 111, 51));
        usunPlyte = new QPushButton(centralWidget);
        usunPlyte->setObjectName(QStringLiteral("usunPlyte"));
        usunPlyte->setGeometry(QRect(370, 230, 111, 51));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(350, 160, 141, 21));
        QtOknoGlowneClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtOknoGlowneClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtOknoGlowneClass->setStatusBar(statusBar);

        retranslateUi(QtOknoGlowneClass);

        QMetaObject::connectSlotsByName(QtOknoGlowneClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtOknoGlowneClass)
    {
        QtOknoGlowneClass->setWindowTitle(QApplication::translate("QtOknoGlowneClass", "QtOknoGlowne", Q_NULLPTR));
        nowaPlyta->setText(QApplication::translate("QtOknoGlowneClass", "PushButton", Q_NULLPTR));
        usunPlyte->setText(QApplication::translate("QtOknoGlowneClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtOknoGlowneClass: public Ui_QtOknoGlowneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOGLOWNE_H
