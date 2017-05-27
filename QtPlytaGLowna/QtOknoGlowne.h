#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtOknoGlowne.h"

class QtOknoGlowne : public QMainWindow
{
	Q_OBJECT

public:
	QtOknoGlowne(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtOknoGlowneClass ui;
};
