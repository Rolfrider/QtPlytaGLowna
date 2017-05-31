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
#include <QtWidgets/QLabel>
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
    QPushButton *szczegolyButton;
    QLabel *labelLista;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtOknoGlowneClass)
    {
        if (QtOknoGlowneClass->objectName().isEmpty())
            QtOknoGlowneClass->setObjectName(QStringLiteral("QtOknoGlowneClass"));
        QtOknoGlowneClass->resize(560, 375);
        centralWidget = new QWidget(QtOknoGlowneClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette;
        QBrush brush(QColor(136, 203, 195, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        centralWidget->setPalette(palette);
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(140, 40, 256, 251));
        listView->setFrameShape(QFrame::StyledPanel);
        listView->setMidLineWidth(0);
        listView->setEditTriggers(QAbstractItemView::EditKeyPressed);
        listView->setTabKeyNavigation(true);
        listView->setAlternatingRowColors(true);
        listView->setSpacing(5);
        nowaPlytaButton = new QPushButton(centralWidget);
        nowaPlytaButton->setObjectName(QStringLiteral("nowaPlytaButton"));
        nowaPlytaButton->setGeometry(QRect(10, 160, 120, 51));
        usunPlyteButton = new QPushButton(centralWidget);
        usunPlyteButton->setObjectName(QStringLiteral("usunPlyteButton"));
        usunPlyteButton->setGeometry(QRect(410, 210, 131, 51));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 130, 120, 21));
        szczegolyButton = new QPushButton(centralWidget);
        szczegolyButton->setObjectName(QStringLiteral("szczegolyButton"));
        szczegolyButton->setGeometry(QRect(410, 70, 131, 51));
        labelLista = new QLabel(centralWidget);
        labelLista->setObjectName(QStringLiteral("labelLista"));
        labelLista->setGeometry(QRect(140, 20, 141, 16));
        labelLista->setAutoFillBackground(false);
        labelLista->setTextFormat(Qt::AutoText);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 110, 71, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 300, 256, 31));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        QtOknoGlowneClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtOknoGlowneClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtOknoGlowneClass->setStatusBar(statusBar);

        retranslateUi(QtOknoGlowneClass);
        QObject::connect(nowaPlytaButton, SIGNAL(clicked()), QtOknoGlowneClass, SLOT(dodajPlyte()));
        QObject::connect(usunPlyteButton, SIGNAL(clicked()), QtOknoGlowneClass, SLOT(usunPlyte()));
        QObject::connect(szczegolyButton, SIGNAL(clicked()), QtOknoGlowneClass, SLOT(pokazSzczegoly()));

        QMetaObject::connectSlotsByName(QtOknoGlowneClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtOknoGlowneClass)
    {
        QtOknoGlowneClass->setWindowTitle(QApplication::translate("QtOknoGlowneClass", "Aplikacj do zarz\304\205dzania obiektami", Q_NULLPTR));
        nowaPlytaButton->setText(QApplication::translate("QtOknoGlowneClass", "Dodaj P\305\202yt\304\231", Q_NULLPTR));
        usunPlyteButton->setText(QApplication::translate("QtOknoGlowneClass", "Usu\305\204 P\305\202yt\304\231", Q_NULLPTR));
        szczegolyButton->setText(QApplication::translate("QtOknoGlowneClass", "Wy\305\233wietl Sczeg\303\263\305\202y", Q_NULLPTR));
        labelLista->setText(QApplication::translate("QtOknoGlowneClass", "Lista stworzonych obiekt\303\263w:", Q_NULLPTR));
        label->setText(QApplication::translate("QtOknoGlowneClass", "Wybierz obiekt", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtOknoGlowneClass", "Zaznacz obiekt i zacznij wpisywa\304\207 aby edytowa\304\207 jego nazw\304\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtOknoGlowneClass: public Ui_QtOknoGlowneClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOGLOWNE_H
