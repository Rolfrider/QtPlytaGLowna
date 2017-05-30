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
		setEditTriggers(QAbstractItemView::AnyKeyPressed |
			QAbstractItemView::DoubleClicked);
	
}

void QtOknoGlowne::dodajPlyte()
{

	/*int wiersz = listaUtworzonychPlyt->rowCount();

	listaUtworzonychPlyt->insertRows(wiersz, 1);

	QModelIndex index = listaUtworzonychPlyt->index(wiersz);

	ui.listaPlyt->setCurrentIndex(index);
	ui.listaPlyt->edit(index);*/

	QString plyta = ui.comboBox->currentText();
	if(plyta== "Plyta Stacjonarna")
		plyty.push_back(new PlytaStacjonarna());
	else if(plyta == "Plyta Mobilna")
		plyty.push_back(new PlytaMobilna());
	else
		plyty.push_back(new PlytaGamingowa());

	//if(lista->size() == 0){
	lista->append(plyta);
	modelPlyt->setStringList(*lista);
	ui.listView->setModel(modelPlyt);
	
	



}

void QtOknoGlowne::usunPlyte()
{
	int index = ui.listView->currentIndex().row();
	
	if (index!= NULL) {
		int i;
		if (index == 0)
			i = index;
		else
			i = index - 1;
		if (!plyty.empty()&& i >=0 && i<plyty.size()) {// tu dodane warunki
			plyty.erase(plyty.begin() + i);
			lista->erase(lista->begin() + i);
		}
		modelPlyt->removeRows(index, 1);
	}

}
