#pragma once

#include <QtWidgets/QDialog>
#include <QFile>
#include <QString>
#include <QTextStream>
#include "ui_QtOknoSzczegolowe.h"
#include "PlytaGlowna.h"

class QtOknoSzczegolowe: public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	QtOknoSzczegolowe(PlytaGlowna* plyta, QWidget *parent = Q_NULLPTR);



private:
	PlytaGlowna * plyta;
	QGraphicsScene* scena;
	QPixmap* obraz;
	void pobierzDane();
	void wyswietlDane(QList<QString> dane, int ile, QList<QLineEdit*> polaNaDane);
	QList<QLineEdit*> polaDanych;
	QList<QLineEdit*> polaDanychProc;
	QStringList czytajDane(QTextStream &in, int start, int koniec);
};

