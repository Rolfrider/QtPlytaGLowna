#pragma once

#include <QtWidgets/QDialog>
#include "ui_QtOknoSzczegolowe.h"

class QtOknoSzczegolowe: public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	QtOknoSzczegolowe(QWidget *parent = Q_NULLPTR);
	
};

