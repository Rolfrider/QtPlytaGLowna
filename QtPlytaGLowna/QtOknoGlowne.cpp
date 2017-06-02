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
void QtOknoGlowne::zmianaNazwy()
{
	int index = ui.listView->currentIndex().row();
	QString nazwa = modelPlyt->index(index).data().toString();
	
	lista->insert(lista->erase(lista->begin() + index), nazwa);

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
	
	ui.usunPlyteButton->setEnabled(true);
	ui.szczegolyButton->setEnabled(true);
	



}

void QtOknoGlowne::usunPlyte()
{
	int index = ui.listView->currentIndex().row();
	
	if (index>=0) {
		if (!plyty.empty()) {
			plyty.erase(plyty.begin() + index);
			lista->erase(lista->begin() + index);
		}
		modelPlyt->removeRows(index, 1);
	}
	if (plyty.empty())
	{
		ui.szczegolyButton->setEnabled(false);
		ui.usunPlyteButton->setEnabled(false);
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