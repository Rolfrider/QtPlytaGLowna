#include "QtOknoSzczegolowe.h"
#define STACJONARNA "PlytaStacjonarna.txt"
#define MOBILNA "PlytaMobilna.txt"
#define GAMINGOWA "PlytaGamingowa.txt"

#define STACJONARNA_OBRAZ "D:\\Resources\PlytaStacjonarna.jpg"
#define MOBILNA_OBRAZ "\\Resources\PlytaMobilna.jpg"
#define GAMINGOWA_OBRAZ "\\Resources\PlytaGamingowa.jpg"



QtOknoSzczegolowe::QtOknoSzczegolowe(PlytaGlowna* plyta, QWidget *parent)
{
	setupUi(this);
	this->plyta = plyta;
	scena = new QGraphicsScene();
	obraz = new QPixmap();
	
	polaDanych = PlytaBox->findChildren<QLineEdit*>();
	polaDanychProc = groupBoxProc->findChildren<QLineEdit*>();
	pobierzDane();
}

void QtOknoSzczegolowe::wyswietlDane(QList<QString> dane, int ile, QList<QLineEdit*> polaNaDane)
{
	
	for (int i = 0; i < ile; i++)
	{
		polaNaDane[i]->setText(dane[i]);
	}
}

QStringList QtOknoSzczegolowe::czytajDane(QTextStream &in, int start, int koniec)
{
	QStringList dane;
	for (int i = start; i < koniec; i++) {
		QString wiersz = in.readLine();
		dane.append(wiersz.split('\n'));

	}
	return dane;
}


void QtOknoSzczegolowe::pobierzDane()
{
	plyta->wpiszDoPliku();
	graphicsView->setScene(scena);
	if (plyta->zwrocNazwe() == "Plyta Stacjonarna")
	{
		if (obraz->load(STACJONARNA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			scena->clear();
			scena->addPixmap(*obraz);
			graphicsView->fitInView(obraz->rect());
		}
		QFile plik(STACJONARNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
	
			return;
		}
		
		QTextStream in(&plik);
		int ilepol = 8;
		QStringList dane = czytajDane(in, 0, ilepol);
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);
	
		wyswietlDane(dane,ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);

		plik.close();
	}
	else if (plyta->zwrocNazwe() == "Plyta Mobilna")
	{
		if (obraz->load(MOBILNA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			scena->clear();
			scena->addPixmap(*obraz);
			graphicsView->fitInView(obraz->rect());
		}
		QFile plik(MOBILNA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
	
		int ilepol = 4;
		QStringList dane = czytajDane(in, 0, ilepol);
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);

		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);

		plik.close();
	}
	else
	{
		if (obraz->load(GAMINGOWA_OBRAZ))
		{
			scena->setSceneRect(obraz->rect());
			scena->clear();
			scena->addPixmap(*obraz);
			graphicsView->fitInView(obraz->rect());
		}
		QFile plik(GAMINGOWA);
		if (!plik.open(QFile::ReadOnly |
			QFile::Text))
		{
			return;
		}
		
		QTextStream in(&plik);
		
		int ilepol = 11;
		QStringList dane = czytajDane(in, 0, ilepol);
		QStringList daneProc = czytajDane(in, ilepol, ilepol + 4);

		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);

		plik.close();

	}

}

