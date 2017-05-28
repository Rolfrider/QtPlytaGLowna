#include "QtOknoGlowne.h"



QtOknoGlowne::QtOknoGlowne(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	listaPlyt = new QStringListModel();

	QStringList list;
	list << "Plyta Stacjonarna" << "Plyta Mobilna" << "Plyta Gamingowa";

	listaPlyt->setStringList(list);

	ui.comboBox->setModel(listaPlyt);
	
}

void QtOknoGlowne::dodajPlyte()
{
	plyty.push_back(new PlytaStacjonarna());


}

void QtOknoGlowne::usunPlyte()
{

}