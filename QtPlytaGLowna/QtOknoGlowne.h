#pragma once

#include <QtWidgets/QMainWindow>
#include <QTextStream>
#include <QStringListModel>
#include <QAbstractItemView>
#include "ui_QtOknoGlowne.h"
#include "PlytaGlowna.h"
#include "PlytaStacjonarna.h"
#include "PlytaMobilna.h"
#include "PlytaGamingowa.h"

extern QTextStream cout;

class QtOknoGlowne : public QMainWindow
{
	Q_OBJECT
		
public:
	QtOknoGlowne(QWidget *parent = Q_NULLPTR);

public slots:
	void dodajPlyte();
	void usunPlyte();

private:
	Ui::QtOknoGlowneClass ui;
	vector<PlytaGlowna*> plyty;
	QStringListModel *modelPlyt;
	QStringListModel *listaOpcji;
	QStringList *lista;

	

};
