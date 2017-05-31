#include "QtOknoSzczegolowe.h"
#define STACJONARNA "PlytaStacjonarna.txt"
#define MOBILNA "PlytaMobilna.txt"
#define GAMINGOWA "PlytaGamingowa.txt"



QtOknoSzczegolowe::QtOknoSzczegolowe(PlytaGlowna* plyta, QWidget *parent)
{
	setupUi(this);
	this->plyta = plyta;
	
	polaDanych = PlytaBox->findChildren<QLineEdit*>();
	pobierzDane();
}

void QtOknoSzczegolowe::wyswietlDane(QList<QString> dane, int ile)
{
	
	for (int i = 0; i < ile; i++)
	{
		polaDanych[i]->setText(dane[i]);
	}
}

void QtOknoSzczegolowe::pobierzDane()
{
	plyta->wpiszDoPliku();
	if (plyta->zwrocNazwe() == "Plyta Stacjonarna")
	{
		QFile plik(STACJONARNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
	
			return;
		}
		
		QTextStream in(&plik);
		int ilepol = 8;
		QStringList dane;
		for (int i = 0; i < ilepol; i++) {
			QString wiersz = in.readLine();
			 dane.append(wiersz.split('\n'));

		}
		
		wyswietlDane(dane,ilepol);

		plik.close();
	}
	else if (plyta->zwrocNazwe() == "Plyta Mobilna")
	{
		QFile plik(MOBILNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
	
		int ilepol = 4;
		QStringList dane;
		for (int i = 0; i < ilepol; i++) {
			QString wiersz = in.readLine();
			dane.append(wiersz.split('\n'));

		}
		
		wyswietlDane(dane, ilepol);

		plik.close();
	}
	else
	{
		QFile plik(GAMINGOWA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
		
		int ilepol = 11;
		QStringList dane;
		for (int i = 0; i < ilepol; i++) {
			QString wiersz = in.readLine();
			dane.append(wiersz.split('\n'));

		}
		wyswietlDane(dane, ilepol);

		plik.close();

	}

}

