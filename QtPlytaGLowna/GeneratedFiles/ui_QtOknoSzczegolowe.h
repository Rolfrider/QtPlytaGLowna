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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

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
    QLabel *labelProducent;
    QLabel *labelSzer;
    QLabel *labelDl;
    QLabel *labelWaga;
    QLabel *labelDostSzyn;
    QLabel *labelZajSzyn;
    QLabel *labelDostPCI;
    QLabel *labelZajPCI;
    QLabel *labelRGB;
    QLabel *labelCech;
    QLabel *labelMaterial;
    QGroupBox *groupBoxProc;
    QLineEdit *lineEditGniazdo;
    QLineEdit *lineEditRdzenie;
    QLineEdit *lineEditTak;
    QLineEdit *lineEditCache;
    QLabel *labelGniazdo;
    QLabel *labelRdzenie;
    QLabel *labelTak;
    QLabel *labelCache;
    QTabWidget *tabWidgetPCI;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *groupBoxRAM;
    QLineEdit *lineEditProducent;
    QLineEdit *lineEditTakt;
    QLineEdit *lineEditPam;
    QLabel *labelProd;
    QLabel *labelTakt;
    QLabel *labelPam;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(647, 542);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 510, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 311, 311));
        PlytaBox = new QGroupBox(Dialog);
        PlytaBox->setObjectName(QStringLiteral("PlytaBox"));
        PlytaBox->setGeometry(QRect(339, 9, 301, 491));
        producentEdit = new QLineEdit(PlytaBox);
        producentEdit->setObjectName(QStringLiteral("producentEdit"));
        producentEdit->setGeometry(QRect(10, 35, 113, 20));
        szerEdit = new QLineEdit(PlytaBox);
        szerEdit->setObjectName(QStringLiteral("szerEdit"));
        szerEdit->setGeometry(QRect(10, 75, 113, 20));
        dlEdit = new QLineEdit(PlytaBox);
        dlEdit->setObjectName(QStringLiteral("dlEdit"));
        dlEdit->setGeometry(QRect(10, 115, 113, 20));
        wagaEdit = new QLineEdit(PlytaBox);
        wagaEdit->setObjectName(QStringLiteral("wagaEdit"));
        wagaEdit->setGeometry(QRect(10, 155, 113, 20));
        dostSzynEdit = new QLineEdit(PlytaBox);
        dostSzynEdit->setObjectName(QStringLiteral("dostSzynEdit"));
        dostSzynEdit->setGeometry(QRect(10, 195, 113, 20));
        ZajSzynEdit = new QLineEdit(PlytaBox);
        ZajSzynEdit->setObjectName(QStringLiteral("ZajSzynEdit"));
        ZajSzynEdit->setGeometry(QRect(10, 235, 113, 20));
        dostPCIEdit = new QLineEdit(PlytaBox);
        dostPCIEdit->setObjectName(QStringLiteral("dostPCIEdit"));
        dostPCIEdit->setGeometry(QRect(10, 275, 113, 20));
        zajPCIEdit = new QLineEdit(PlytaBox);
        zajPCIEdit->setObjectName(QStringLiteral("zajPCIEdit"));
        zajPCIEdit->setGeometry(QRect(10, 315, 113, 20));
        rgbEdit = new QLineEdit(PlytaBox);
        rgbEdit->setObjectName(QStringLiteral("rgbEdit"));
        rgbEdit->setGeometry(QRect(10, 355, 131, 20));
        cechEdit = new QLineEdit(PlytaBox);
        cechEdit->setObjectName(QStringLiteral("cechEdit"));
        cechEdit->setGeometry(QRect(10, 395, 131, 20));
        materialEdit = new QLineEdit(PlytaBox);
        materialEdit->setObjectName(QStringLiteral("materialEdit"));
        materialEdit->setGeometry(QRect(10, 435, 181, 20));
        labelProducent = new QLabel(PlytaBox);
        labelProducent->setObjectName(QStringLiteral("labelProducent"));
        labelProducent->setGeometry(QRect(10, 20, 61, 16));
        labelSzer = new QLabel(PlytaBox);
        labelSzer->setObjectName(QStringLiteral("labelSzer"));
        labelSzer->setGeometry(QRect(10, 60, 81, 16));
        labelDl = new QLabel(PlytaBox);
        labelDl->setObjectName(QStringLiteral("labelDl"));
        labelDl->setGeometry(QRect(10, 100, 71, 16));
        labelWaga = new QLabel(PlytaBox);
        labelWaga->setObjectName(QStringLiteral("labelWaga"));
        labelWaga->setGeometry(QRect(10, 140, 71, 16));
        labelDostSzyn = new QLabel(PlytaBox);
        labelDostSzyn->setObjectName(QStringLiteral("labelDostSzyn"));
        labelDostSzyn->setGeometry(QRect(10, 180, 121, 16));
        labelZajSzyn = new QLabel(PlytaBox);
        labelZajSzyn->setObjectName(QStringLiteral("labelZajSzyn"));
        labelZajSzyn->setGeometry(QRect(10, 220, 111, 16));
        labelDostPCI = new QLabel(PlytaBox);
        labelDostPCI->setObjectName(QStringLiteral("labelDostPCI"));
        labelDostPCI->setGeometry(QRect(10, 260, 111, 16));
        labelZajPCI = new QLabel(PlytaBox);
        labelZajPCI->setObjectName(QStringLiteral("labelZajPCI"));
        labelZajPCI->setGeometry(QRect(10, 300, 111, 16));
        labelRGB = new QLabel(PlytaBox);
        labelRGB->setObjectName(QStringLiteral("labelRGB"));
        labelRGB->setGeometry(QRect(10, 340, 131, 16));
        labelCech = new QLabel(PlytaBox);
        labelCech->setObjectName(QStringLiteral("labelCech"));
        labelCech->setGeometry(QRect(10, 380, 131, 16));
        labelMaterial = new QLabel(PlytaBox);
        labelMaterial->setObjectName(QStringLiteral("labelMaterial"));
        labelMaterial->setGeometry(QRect(10, 420, 181, 16));
        groupBoxProc = new QGroupBox(PlytaBox);
        groupBoxProc->setObjectName(QStringLiteral("groupBoxProc"));
        groupBoxProc->setGeometry(QRect(150, 30, 141, 211));
        lineEditGniazdo = new QLineEdit(groupBoxProc);
        lineEditGniazdo->setObjectName(QStringLiteral("lineEditGniazdo"));
        lineEditGniazdo->setGeometry(QRect(10, 35, 113, 20));
        lineEditRdzenie = new QLineEdit(groupBoxProc);
        lineEditRdzenie->setObjectName(QStringLiteral("lineEditRdzenie"));
        lineEditRdzenie->setGeometry(QRect(10, 75, 113, 20));
        lineEditTak = new QLineEdit(groupBoxProc);
        lineEditTak->setObjectName(QStringLiteral("lineEditTak"));
        lineEditTak->setGeometry(QRect(10, 115, 113, 20));
        lineEditCache = new QLineEdit(groupBoxProc);
        lineEditCache->setObjectName(QStringLiteral("lineEditCache"));
        lineEditCache->setGeometry(QRect(10, 155, 113, 20));
        labelGniazdo = new QLabel(groupBoxProc);
        labelGniazdo->setObjectName(QStringLiteral("labelGniazdo"));
        labelGniazdo->setGeometry(QRect(10, 20, 111, 16));
        labelRdzenie = new QLabel(groupBoxProc);
        labelRdzenie->setObjectName(QStringLiteral("labelRdzenie"));
        labelRdzenie->setGeometry(QRect(10, 60, 101, 16));
        labelTak = new QLabel(groupBoxProc);
        labelTak->setObjectName(QStringLiteral("labelTak"));
        labelTak->setGeometry(QRect(10, 100, 121, 16));
        labelCache = new QLabel(groupBoxProc);
        labelCache->setObjectName(QStringLiteral("labelCache"));
        labelCache->setGeometry(QRect(10, 140, 111, 16));
        tabWidgetPCI = new QTabWidget(Dialog);
        tabWidgetPCI->setObjectName(QStringLiteral("tabWidgetPCI"));
        tabWidgetPCI->setGeometry(QRect(10, 340, 151, 181));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidgetPCI->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidgetPCI->addTab(tab_2, QString());
        groupBoxRAM = new QGroupBox(Dialog);
        groupBoxRAM->setObjectName(QStringLiteral("groupBoxRAM"));
        groupBoxRAM->setGeometry(QRect(180, 350, 151, 171));
        lineEditProducent = new QLineEdit(groupBoxRAM);
        lineEditProducent->setObjectName(QStringLiteral("lineEditProducent"));
        lineEditProducent->setGeometry(QRect(10, 40, 113, 20));
        lineEditTakt = new QLineEdit(groupBoxRAM);
        lineEditTakt->setObjectName(QStringLiteral("lineEditTakt"));
        lineEditTakt->setGeometry(QRect(10, 80, 113, 20));
        lineEditPam = new QLineEdit(groupBoxRAM);
        lineEditPam->setObjectName(QStringLiteral("lineEditPam"));
        lineEditPam->setGeometry(QRect(10, 120, 113, 20));
        labelProd = new QLabel(groupBoxRAM);
        labelProd->setObjectName(QStringLiteral("labelProd"));
        labelProd->setGeometry(QRect(10, 20, 111, 16));
        labelTakt = new QLabel(groupBoxRAM);
        labelTakt->setObjectName(QStringLiteral("labelTakt"));
        labelTakt->setGeometry(QRect(10, 60, 111, 16));
        labelPam = new QLabel(groupBoxRAM);
        labelPam->setObjectName(QStringLiteral("labelPam"));
        labelPam->setGeometry(QRect(10, 100, 111, 16));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        tabWidgetPCI->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        PlytaBox->setTitle(QApplication::translate("Dialog", "Szczeg\303\263\305\202y P\305\202yty", Q_NULLPTR));
        labelProducent->setText(QApplication::translate("Dialog", "Producent:", Q_NULLPTR));
        labelSzer->setText(QApplication::translate("Dialog", "Szeroko\305\233\304\207(mm):", Q_NULLPTR));
        labelDl->setText(QApplication::translate("Dialog", "D\305\202ugo\305\233\304\207(mm):", Q_NULLPTR));
        labelWaga->setText(QApplication::translate("Dialog", "Waga(gram):", Q_NULLPTR));
        labelDostSzyn->setText(QApplication::translate("Dialog", "Dost\304\231pne szyny pamieci:", Q_NULLPTR));
        labelZajSzyn->setText(QApplication::translate("Dialog", "<html><head/><body><p>Zaj\304\231te szyny pamieci:</p></body></html>", Q_NULLPTR));
        labelDostPCI->setText(QApplication::translate("Dialog", "Dost\304\231pne gniazda PCI:", Q_NULLPTR));
        labelZajPCI->setText(QApplication::translate("Dialog", "Zaj\304\231te gniazada PCI:", Q_NULLPTR));
        labelRGB->setText(QApplication::translate("Dialog", "Kolor pod\305\233wietlenia RGB:", Q_NULLPTR));
        labelCech->setText(QApplication::translate("Dialog", "Cechy szczeg\303\263lne p\305\202yty:", Q_NULLPTR));
        labelMaterial->setText(QApplication::translate("Dialog", "Materia\305\202 z kt\303\263rego zosta\305\202a wykonana:", Q_NULLPTR));
        groupBoxProc->setTitle(QApplication::translate("Dialog", "Szczeg\303\263\305\202y Procesora", Q_NULLPTR));
        labelGniazdo->setText(QApplication::translate("Dialog", "Gniazdo procesora:", Q_NULLPTR));
        labelRdzenie->setText(QApplication::translate("Dialog", "Liczba rdzeni:", Q_NULLPTR));
        labelTak->setText(QApplication::translate("Dialog", "Taktowanie rdzeni(GHz):", Q_NULLPTR));
        labelCache->setText(QApplication::translate("Dialog", "Pamie\304\207 Cache(MB):", Q_NULLPTR));
        tabWidgetPCI->setTabText(tabWidgetPCI->indexOf(tab), QApplication::translate("Dialog", "Tab 1", Q_NULLPTR));
        tabWidgetPCI->setTabText(tabWidgetPCI->indexOf(tab_2), QApplication::translate("Dialog", "Tab 2", Q_NULLPTR));
        groupBoxRAM->setTitle(QApplication::translate("Dialog", "Szczeg\303\263\305\202y RAM", Q_NULLPTR));
        labelProd->setText(QApplication::translate("Dialog", "Producent:", Q_NULLPTR));
        labelTakt->setText(QApplication::translate("Dialog", "Taktowanie:", Q_NULLPTR));
        labelPam->setText(QApplication::translate("Dialog", "Pami\304\231\304\207:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOKNOSZCZEGOLOWE_H
