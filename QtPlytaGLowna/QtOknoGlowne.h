#pragma once

#include <QtWidgets/QMainWindow>
#include <QTextStream>
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

private:
	Ui::QtOknoGlowneClass ui;
	

};
