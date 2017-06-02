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
	QWidget *wybrany = tabWidgetPCI->currentWidget();
	int index = tabWidgetPCI->currentIndex();

	wybrany->setLayout(verticalLayout);
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
		
		tabs.append(new QWidget);
		tabs[i]->setObjectName(QStringLiteral("tab_%1").arg(i+2));
		tabWidgetPCI->addTab(tabs[i], QString(QString("PCI %1").arg(i + 2)));

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


void QtOknoSzczegolowe::pobierzDane()
{
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
		QStringList daneRam = czytajDane(in, ilepol + 4, ilepol + 7);
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
		QStringList daneRam = czytajDane(in, ilepol + 4, ilepol + 7);
		danePci = czytajDane(in, ilepol + 4 + ileRamu * 3, ilepol + 4 + ileRamu * 3 + ilePci * 3);
		wyswietlDane(daneRam, 3, polaDanychRam);
		wyswietlDane(dane, ilepol, polaDanych);
		wyswietlDane(daneProc, 4, polaDanychProc);
		wyswietlDanePci(danePci, polaDanychPci);
		plik.close();

	}

}

