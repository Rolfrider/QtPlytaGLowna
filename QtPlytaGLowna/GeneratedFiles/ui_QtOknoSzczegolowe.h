/********************************************************************************
** Form generated from reading UI file 'QtOknoSzczegolowe.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOKNOSZCZEGOLOWE_H
#define UI_QTOKNOSZCZEGOLOWE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QGraphicsView *graphicsView;
    QGroupBox *PlytaBox;
    QLineEdit *producentEdit;
    QLineEdit *szerEdit;
    QLineEdit *dlEdit;
    QLineEdit *wagaEdit;
    QLineEdit *dostSzynEdit;
    QLineEdit *ZajSzynEdit;
    QLineEdit *dostPCIEdit;
    QLineEdit *zajPCIEdit;
    QLineEdit *rgbEdit;
    QLineEdit *cechEdit;
    QLineEdit *materialEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(647, 559);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 510, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 70, 311, 311));
        PlytaBox = new QGroupBox(Dialog);
        PlytaBox->setObjectName(QStringLiteral("PlytaBox"));
        PlytaBox->setGeometry(QRect(339, 9, 301, 491));
        producentEdit = new QLineEdit(PlytaBox);
        producentEdit->setObjectName(QStringLiteral("producentEdit"));
        producentEdit->setGeometry(QRect(10, 30, 113, 20));
        szerEdit = new QLineEdit(PlytaBox);
        szerEdit->setObjectName(QStringLiteral("szerEdit"));
        szerEdit->setGeometry(QRect(10, 70, 113, 20));
        dlEdit = new QLineEdit(PlytaBox);
        dlEdit->setObjectName(QStringLiteral("dlEdit"));
        dlEdit->setGeometry(QRect(10, 110, 113, 20));
        wagaEdit = new QLineEdit(PlytaBox);
        wagaEdit->setObjectName(QStringLiteral("wagaEdit"));
        wagaEdit->setGeometry(QRect(10, 160, 113, 20));
        dostSzynEdit = new QLineEdit(PlytaBox);
        dostSzynEdit->setObjectName(QStringLiteral("dostSzynEdit"));
        dostSzynEdit->setGeometry(QRect(10, 210, 113, 20));
        ZajSzynEdit = new QLineEdit(PlytaBox);
        ZajSzynEdit->setObjectName(QStringLiteral("ZajSzynEdit"));
        ZajSzynEdit->setGeometry(QRect(10, 260, 113, 20));
        dostPCIEdit = new QLineEdit(PlytaBox);
        dostPCIEdit->setObjectName(QStringLiteral("dostPCIEdit"));
        dostPCIEdit->setGeometry(QRect(10, 300, 113, 20));
        zajPCIEdit = new QLineEdit(PlytaBox);
        zajPCIEdit->setObjectName(QStringLiteral("zajPCIEdit"));
        zajPCIEdit->setGeometry(QRect(10, 340, 113, 20));
        rgbEdit = new QLineEdit(PlytaBox);
        rgbEdit->setObjectName(QStringLiteral("rgbEdit"));
        rgbEdit->setGeometry(QRect(10, 390, 131, 20));
        cechEdit = new QLineEdit(PlytaBox);
        cechEdit->setObjectName(QStringLiteral("cechEdit"));
        cechEdit->setGeometry(QRect(10, 430, 131, 20));
        materialEdit = new QLineEdit(PlytaBox);
        materialEdit->setObjectName(QStringLiteral("materialEdit"));
        materialEdit->setGeometry(QRect(10, 470, 171, 20));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        PlytaBox->setTitle(QApplication::translate("Dialog", "Szczeg\303\263\305\202y P\305\202yty", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOSZCZEGOLOWE_H
