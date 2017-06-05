#include "QtOknoSzczegolowe.h"
#define STACJONARNA "PlytaStacjonarna.txt"
#define MOBILNA "PlytaMobilna.txt"
#define GAMINGOWA "PlytaGamingowa.txt"

#define STACJONARNA_OBRAZ "Resources\\PlytaStacjonarna.jpg"
#define MOBILNA_OBRAZ "Resources\\PlytaMobilna.png"
#define GAMINGOWA_OBRAZ "Resources\\PlytaGamingowa.jpg"



QtOknoSzczegolowe::QtOknoSzczegolowe(PlytaGlowna* plyta, QWidget *parent)
{
	setupUi(this);
	this->plyta = plyta;
	scena = new QGraphicsScene();
	obraz = new QPixmap();
	polaDanych = PlytaBox->findChildren<QLineEdit*>();
	polaDanychProc = groupBoxProc->findChildren<QLineEdit*>();
	polaDanychRam = groupBoxRAM->findChildren<QLineEdit*>();
	polaDanychPci = verticalLayoutWidget->findChildren<QLineEdit*>();
	
	tabWidgetPCI->removeTab(1);
	pobierzDane();
}

void QtOknoSzczegolowe::wyswietlDane(QList<QString> dane, int ile, QList<QLineEdit*> polaNaDane)
{
	
	for (int i = 0; i < ile; i++)
	{
		polaNaDane[i]->setText(dane[i]);
	}
	for (int i = ile; i < polaNaDane.size(); i++)
		polaNaDane[i]->setText("Brak");
}

void QtOknoSzczegolowe::zmianaTabu()
{
	QWidget *wybrany = tabWidgetPCI->currentWidget();// Pobranie wybranej zak³adki
	int index = tabWidgetPCI->currentIndex(); // Pobranie jej numeru


	wybrany->setLayout(verticalLayout);// ustawienie na niej layoutu
	int k = 0;
	for (int i = index*3; i < index*3+3; i++) {
		polaDanychPci[k]->setText(danePci[i]);
		k++;
	}




}

void QtOknoSzczegolowe::wyswietlDanePci(QList<QString> dane, QList<QLineEdit*> polaNaDane)
{
	
	for (int i = 0; i < (dane.size()) / 3 - 1; i++)
	{
		
		tabs.append(new QWidget); // dodanie nowego tabu
		tabs[i]->setObjectName(QStringLiteral("tab_%1").arg(i+2)); // Nadanie imienia zak³adki
		tabWidgetPCI->addTab(tabs[i], QString(QString("PCI %1").arg(i + 2))); // Nadanie nzay zak³adki

	}

	for (int i = 0; i < 3; i++) {
		polaNaDane[i]->setText(dane[i]);
	}
}

QStringList QtOknoSzczegolowe::czytajDane(QTextStream &in, int start, int koniec)
{
	QStringList dane;
	QString wiersz;
	
		for (int i = start; i < koniec; i++) {
			wiersz = in.readLine();
			dane.append(wiersz.split('\n'));

		}
		
	

	return dane;
}

void QtOknoSzczegolowe::zezwolNaEdycje()
{
	pushButtonAnuluj->setVisible(true);
	pushButtonZapisz->setVisible(true);
	pushButtonEdycja->setEnabled(false);


	QList<QLineEdit*> tmp;
	for (int i = 0; i < 3; i++) {
		
		switch (i)
		{
			case 0:
			{
				tmp = polaDanych;
				break;
			}
			case 1:
			{
				tmp = polaDanychRam;
				break;
			}
			case 2:
			{
				tmp = polaDanychProc;
				break;
			}
	
		}
		for (int z = 0; z < tmp.size(); z++)
			tmp[z]->setEnabled(true);
	}
}

void QtOknoSzczegolowe::zapiszDane(QTextStream &out, int ile)
{
	
	QList<QLineEdit*> tmp;
	for (int i = 0; i < 3; i++) {

		switch (i)
		{
		case 0:
		{
			tmp = polaDanych;
			for (int z = 0; z < ile; z++)
				out << tmp[z]->text() << endl;
			break;
		}
		case 1:
		{
			tmp = polaDanychProc;
			for (int z = 0; z < tmp.size(); z++)
				out << tmp[z]->text() << endl;
			break;
			
		}
		case 2:
		{
			tmp = polaDanychRam;
			for (int x = 0; x < plyta->zwrocRam(); x++)
			{
				for (int z = 0; z < tmp.size(); z++)
					out << tmp[z]->text() << endl;
			}
			break;
		}

		}
		for (int z = 0; z < tmp.size(); z++)
			tmp[z]->setEnabled(false);
	}
	for (int z = 0; z < danePci.size(); z++)
		out << danePci[z] << endl;
}
void QtOknoSzczegolowe::zapiszZmiany()
{
	pushButtonEdycja->setEnabled(true);
	int ilepol;
	if (plyta->zwrocNazwe() == "Plyta Stacjonarna")
	{
		
		QFile plik(STACJONARNA);
		if (!plik.open(QFile::WriteOnly | QIODevice::Truncate|
			QFile::Text))
		{

			return;
		}
		ilepol = 8;
		QTextStream out(&plik);
		zapiszDane(out, ilepol);

		plik.close();
		try {
			plyta->wczytajZPliku();
		}
		catch (...) {
			QMessageBox blad;
			blad.setWindowTitle("Problem z edycja danych"); 
			blad.setText("Wystapil blad");
			blad.setInformativeText("Prawdopodobnie wprowadzono nie odpowiednia wartosc");
			blad.exec(); 
			plyta = new PlytaStacjonarna();
		}
	}
	else if (plyta->zwrocNazwe() == "Plyta Mobilna")
	{
		
		QFile plik(MOBILNA);
		if (!plik.open(QFile::WriteOnly | QIODevice::Truncate|
			QFile::Text))
		{
			return;
		}
		ilepol = 4;
		QTextStream out(&plik);
		zapiszDane(out, ilepol);
		

		plik.close();
		try {
			plyta->wczytajZPliku();
		}
		catch (...) {
			QMessageBox blad;
			blad.setWindowTitle("Problem z edycja danych");
			blad.setText("Wystapil blad");
			blad.setInformativeText("Prawdopodobnie wprowadzono nie odpowiednia wartosc");
			blad.exec();
			plyta = new PlytaMobilna();
		}
	}
	else
	{
		
		QFile plik(GAMINGOWA);
		if (!plik.open(QFile::WriteOnly | QIODevice::Truncate|
			QFile::Text))
		{
			return;
		}
		ilepol = 11;
		QTextStream out(&plik);
		zapiszDane(out, ilepol);

		plik.close();

		try {
			plyta->wczytajZPliku();
		}
		catch (...) {
			QMessageBox blad;
			blad.setWindowTitle("Problem z edycja danych");
			blad.setText("Wystapil blad");
			blad.setInformativeText("Prawdopodobnie wprowadzono nie odpowiednia wartosc");
			blad.exec();
			plyta = new PlytaGamingowa();
		}
	}
	pobierzDane();
}

	

void QtOknoSzczegolowe::anulujZmiany()
{
	pushButtonEdycja->setEnabled(true);
	pobierzDane();
	QList<QLineEdit*> tmp;
	for (int i = 0; i < 3; i++) {

		switch (i)
		{
		case 0:
		{
			tmp = polaDanych;
			break;
		}
		case 1:
		{
			tmp = polaDanychRam;
			break;
		}
		case 2:
		{
			tmp = polaDanychProc;
			break;
		}

		}
		for (int z = 0; z < tmp.size(); z++)
			tmp[z]->setEnabled(false);
	}
}


void QtOknoSzczegolowe::pobierzDane()
{
	pushButtonAnuluj->setVisible(false);
	pushButtonZapisz->setVisible(false);
	plyta->wpiszDoPliku();
	graphicsView->setScene(scena);
	int ileRamu;
	int ilePci;
	int ilepol;
	ileRamu = plyta->zwrocRam();
	ilePci = plyta->zwrocPci();
	if (plyta->zwrocNazwe() == "Plyta Stacjonarna")
	{
		if (obraz->load(STACJONARNA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			scena->addPixmap(*obraz);
			
		}
		QFile plik(STACJONARNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
	
			return;
		}
		
		QTextStream in(&plik);
		ilepol = 8;
		QStringList dane = czytajDane(in, 0, ilepol);
		
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);
		QStringList daneRam = czytajDane(in, ilepol + 4, ilepol + 4 + ileRamu * 3);
		danePci = czytajDane(in, ilepol + 4 + ileRamu * 3, ilepol + 4 + ileRamu * 3 + ilePci * 3);
		
		wyswietlDane(daneRam, 3, polaDanychRam);
		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);
		wyswietlDanePci(danePci, polaDanychPci);

		plik.close();
	}
	else if (plyta->zwrocNazwe() == "Plyta Mobilna")
	{
		if (obraz->load(MOBILNA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			
			scena->addPixmap(*obraz);
			
		}
		QFile plik(MOBILNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
	
		ilepol = 4;
		labelPami->setText("Pamiec(MB):");
		QStringList dane = czytajDane(in, 0, ilepol);
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);
		QStringList daneRam = czytajDane(in, ilepol + 4, ilepol + 7);
		danePci = czytajDane(in, ilepol + 4 + ileRamu*3, ilepol + 4 + ileRamu * 3 + ilePci*3);

		wyswietlDane(daneRam, 3, polaDanychRam);
		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);
		wyswietlDanePci(danePci, polaDanychPci);

		plik.close();
	}
	else
	{
		if (obraz->load(GAMINGOWA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			
			scena->addPixmap(*obraz);
			
		}
		QFile plik(GAMINGOWA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
		
		ilepol = 11;
		
		QStringList dane = czytajDane(in, 0, ilepol);
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);
		QStringList daneRam = czytajDane(in, ilepol + 4, ilepol + 4 + ileRamu * 3);
		danePci = czytajDane(in, ilepol + 4 + ileRamu * 3, ilepol + 4 + ileRamu * 3 + ilePci * 3);

		wyswietlDane(daneRam, 3, polaDanychRam);
		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);
		wyswietlDanePci(danePci, polaDanychPci);
		plik.close();

	}

}

