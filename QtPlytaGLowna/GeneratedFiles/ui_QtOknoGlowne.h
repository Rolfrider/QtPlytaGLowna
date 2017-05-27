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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOknoGlowneClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtOknoGlowneClass)
    {
        if (QtOknoGlowneClass->objectName().isEmpty())
            QtOknoGlowneClass->setObjectName(QStringLiteral("QtOknoGlowneClass"));
        QtOknoGlowneClass->resize(600, 400);
        menuBar = new QMenuBar(QtOknoGlowneClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtOknoGlowneClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtOknoGlowneClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtOknoGlowneClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtOknoGlowneClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
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
    } // retranslateUi

};

namespace Ui {
    class QtOknoGlowneClass: public Ui_QtOknoGlowneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOGLOWNE_H
