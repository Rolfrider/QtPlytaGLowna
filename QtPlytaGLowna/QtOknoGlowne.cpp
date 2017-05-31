#include "QtOknoGlowne.h"





QtOknoGlowne::QtOknoGlowne(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	listaOpcji = new QStringListModel();
	modelPlyt = new QStringListModel();
	lista = new QStringList();

	QStringList list;
	list << "Plyta Stacjonarna" << "Plyta Mobilna" << "Plyta Gamingowa";

	listaOpcji->setStringList(list);

	ui.comboBox->setModel(listaOpcji);

	ui.listView->
		setEditTriggers(QAbstractItemView::AnyKeyPressed);
	
}

void QtOknoGlowne::dodajPlyte()
{
	
	QString plyta = ui.comboBox->currentText();
	if(plyta== "Plyta Stacjonarna")
		plyty.push_back(new PlytaStacjonarna());
	else if(plyta == "Plyta Mobilna")
		plyty.push_back(new PlytaMobilna());
	else
		plyty.push_back(new PlytaGamingowa());
	
	lista->append(plyta);
	modelPlyt->setStringList(*lista);
	ui.listView->setModel(modelPlyt);
	
	
	



}

void QtOknoGlowne::usunPlyte()
{
	int index = ui.listView->currentIndex().row();
	
	if (index>=0) {
		int i;
		if (index == 0)
			i = index;
		else
			i = index - 1;
		if (!plyty.empty()) {
			plyty.erase(plyty.begin() + i);
			lista->erase(lista->begin() + i);
		}
		modelPlyt->removeRows(index, 1);
	}

}

void QtOknoGlowne::pokazSzczegoly()
{
	int index = ui.listView->currentIndex().row();

	
	if (!plyty.empty()&& index >= 0) {
		QtOknoSzczegolowe *okno = new QtOknoSzczegolowe(plyty[index]);
		okno->exec();
	}
		

	
	
}