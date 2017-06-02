#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QVBoxLayout>
#include "ui_QtOknoSzczegolowe.h"

#include "PlytaGlowna.h"

class QtOknoSzczegolowe: public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	QtOknoSzczegolowe(PlytaGlowna* plyta, QWidget *parent = Q_NULLPTR);

public slots:
	void zmianaTabu();


private:
	PlytaGlowna * plyta;
	QGraphicsScene* scena;
	QPixmap* obraz;
	void pobierzDane();
	void wyswietlDane(QList<QString> dane, int ile, QList<QLineEdit*> polaNaDane);
	void wyswietlDanePci(QList<QString> dane, QList<QLineEdit*> polaNaDane);
	QList<QLineEdit*> polaDanych;
	QList<QLineEdit*> polaDanychProc;
	QList<QLineEdit*> polaDanychRam;
	QList<QLineEdit*> polaDanychPci;
	QList<QWidget*> tabs;
	QStringList danePci;
	QStringList czytajDane(QTextStream &in, int start, int koniec);
};

