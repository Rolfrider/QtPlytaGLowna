#include "stdafx.h"
#include "PlytaStacjonarna.h"

#ifdef _DEBUG
#define DEBUG(x)
#else
#define DEBUG(x) cout<<x<<endl;
#endif // _DEBUG

int PlytaStacjonarna::liczbaPlyt = 0;
// KONSKRUKTORY
PlytaStacjonarna::PlytaStacjonarna()
{
	DEBUG("Tworze plyte glowna")

	szerokosc = 305;
	dlugosc = 244;
	waga = 222.1;
	marka = losuj();
	liczbaPlyt++;
	liczbaSzyn = (rand() % 6 + 1);
	wejsciaPCI = (rand() % 4 + 1);
	szynyZajete = (rand() % liczbaSzyn + 1);
	PCIzajete = (rand() % wejsciaPCI + 1);

	RAM.reserve(liczbaSzyn);///< Rezerwuje nam miejsce na max tyle element�w ile jest szyn
	if (liczbaSzyn!=0)
	{
		for (int i = 0; i < szynyZajete; i++)
		{
			RAM.push_back(SzynaPamieci());
		}
	
	}
	if (wejsciaPCI != 0)
	{
		for (int i = 0; i < PCIzajete; i++)
		{
			karty.push_back(PCI());
		}

	}
}

PlytaStacjonarna::PlytaStacjonarna(int liczbaSzyn, int szynyZajete, int wejsciaPCI, int PCIzajete) :
	liczbaSzyn(liczbaSzyn), szynyZajete(szynyZajete), wejsciaPCI(wejsciaPCI), PCIzajete(PCIzajete) {
	szerokosc = 305;
	dlugosc = 244;
	waga = 222.1;
	marka = losuj();
	liczbaPlyt++;
	RAM.reserve(liczbaSzyn);// Rezerwuje nam miejsce na max tyle element�w ile jest szyn
	if (liczbaSzyn != 0)
	{
		for (int i = 0; i < szynyZajete; i++)
		{
			RAM.push_back(SzynaPamieci());
		}

	}
	if (wejsciaPCI != 0)
	{
		for (int i = 0; i < PCIzajete; i++)
		{
			karty.push_back(PCI());
		}

	}


}

PlytaStacjonarna::PlytaStacjonarna(PlytaStacjonarna &p) { // konstruktor kopiuj�cy 
	DEBUG("Tworze plyte glowna")
	liczbaPlyt++;
	marka = p.marka;
	liczbaSzyn = p.liczbaSzyn;
	wejsciaPCI = p.wejsciaPCI;
	szynyZajete = p.szynyZajete;
	PCIzajete = p.PCIzajete;
	RAM = p.RAM;
	karty = p.karty;
}
// OPERATORY
bool PlytaStacjonarna::operator==(PlytaStacjonarna &p) {
	return (liczbaSzyn == p.liczbaSzyn && wejsciaPCI == p.wejsciaPCI);
}

PlytaStacjonarna& PlytaStacjonarna::operator^(const int a) {
	if (a > 0) {
		if (RAM.size() != 0) {
			cout << "Przetaktowuje pamiec RAM" << endl;
			RAM[0].PrzetaktujGora(RAM[0]);
		}
		else
			cout << " Nie ma RAMU" << endl;
	}
	else if (a < 0) {
		if (RAM.size() != 0) {
			cout << "Przetaktowuje pamiec RAM" << endl;
			RAM[0].PrzetaktujDol(RAM[0]);
		}
		else
			cout << " Nie ma RAMU" << endl;
	}
	else
		cout << "Nie wprowadzam zmiann" << endl;

	cout << "Aktualny stan RAMU: " << endl;
	cout << RAM[0] << endl;
	return *this;
}

PlytaStacjonarna::operator int() {
	return szynyZajete;// operator konwersji  int a = PlytaGLowna => a = szynyZajete
}

PCI& PlytaStacjonarna::operator[](const int i) {
	if (i >= 0 && i < PCIzajete) {
		return	karty[i];
	}
	else
	{
		cout << "Zlacze PCI nie istnieje lub nic nie jest do niego podloczone" << endl;
		cout << "Zwracam domyslny numer zlocza PCI(0)" << endl;
		return karty[0];
	}
}

PlytaStacjonarna& PlytaStacjonarna::operator=(const PlytaStacjonarna &p) {
	liczbaSzyn = p.liczbaSzyn;
	wejsciaPCI = p.wejsciaPCI;
	szynyZajete = p.szynyZajete;
	PCIzajete = p.PCIzajete;
	RAM = p.RAM;
	karty = p.karty;


	return *this;

}

PlytaStacjonarna& PlytaStacjonarna::operator++() { //Dodaje RAM jesli to mozliwe
	cout << "Procedura dodania nowej kosci RAM" << endl;
		
		if (liczbaSzyn > szynyZajete)
		{
			RAM.push_back(SzynaPamieci());
			szynyZajete++;
		}
		else 
			cout << "Nie mozna dodac, wszystkie szyny pamieci zajete" << endl;
		
	
	return *this;
}

PlytaStacjonarna& PlytaStacjonarna::operator--() { //Odejmowanie RAM jesli to mozliwe
	cout << "Procedura  odejmowania kosci RAM" << endl;
	if (RAM.size() != 0)
	{
		RAM.pop_back();
		szynyZajete--;
	}
	else 
		cout << "Nie mozna odjac RAMU" << endl;
		
	

	return *this;
}

PlytaStacjonarna PlytaStacjonarna::operator++(int) {//Dodaje karte rozszerzen
	cout << "Procedura dodania nowej karty rozszerzen" << endl;
	PlytaStacjonarna kopia = *this;
	if ((szynyZajete < liczbaSzyn) && (karty.max_size() > karty.size()))
	{
		karty.push_back(PCI());
		PCIzajete++;
	}
	else
		cout << "Nie mo�na doda� ju� kart rozszerzen" << endl;

	return kopia;

}

PlytaStacjonarna PlytaStacjonarna::operator--(int) {//Odejmuje karte rozszerzen
	cout << "Procedura odejmowania karty rozszerzen" << endl;
	PlytaStacjonarna kopia = *this;
	if (karty.size() != 0)
	{
		karty.pop_back();
		PCIzajete--;
	}
	else
		cout << "Nie ma karty do usuniecia" << endl;
	return kopia;

}

ostream& operator << (ostream &s, PlytaStacjonarna &p) {
	cout << "Plyta Stacjoanrna:" << endl;
	cout << "Producent : "; s << p.marka << endl;
	cout << "Szerokosc w mm : "; s << p.szerokosc << endl;
	cout << "Dlugosc w mm "; s << p.dlugosc << endl;
	cout << "Waga : "; s << p.waga; cout << " gram"; s << endl;
	cout << "Dostepne szyny pamieci: "; s << p.liczbaSzyn << endl;;
	cout << " Zajete szyny pamieci : "; s << p.szynyZajete << endl;
	cout << "Dostepne zlacza PCI: "; s << p.wejsciaPCI << endl;
	cout << " Zajete zlacza PCI: "; s << p.PCIzajete << endl;
	p.dzialka();
	s << p.procesor;
	for (int i = 0; i < p.karty.size(); i++) {
		p.dzialka();
		s << p.karty[i];
	}
	for (int i = 0; i < p.RAM.size(); i++) {
		p.dzialka();
		s << p.RAM[i];
	}
	p.dzialka();
	return s;
}

istream& operator >> (istream &o, PlytaStacjonarna &p) {
	cout << "Podaj nazwe producenta plyty :" << endl;
	getline(o, p.marka);
	cout << "Podaj szerokosc w mm plyty :" << endl;
	o >> p.szerokosc;
	cout << "Podaj dlugosc w mm plyty :" << endl;
	o >> p.dlugosc;
	cout << "Podaj wage w gramch plyty :" << endl;
	o >> p.waga;
	cout << "Podaj liczbe dostepnych szyn pamieci" << endl;
	o >> p.liczbaSzyn;
	cout << "Podaj liczbe zajetych szyn pamieci " << endl;
	o >> p.szynyZajete;
	cout << "Podaj liczbe zlaczy PCI" << endl;
	o >> p.wejsciaPCI;
	cout << "Podaj liczbe zajetych zlacz PCI " << endl;
	o >> p.PCIzajete;
	o >> p.procesor;
	for (int i = 0; i < p.karty.size(); i++) {
		p.dzialka();
		o >> p.karty[i];
	}
	for (int i = 0; i < p.RAM.size(); i++) {
		p.dzialka();
		o >> p.RAM[i];
	}
	return o;
}

//METODY
void PlytaStacjonarna::wypiszDane(){
	cout << *this << endl;
}

void PlytaStacjonarna::stan() {
	cout << "Stacjonarna plyta gotowa do uzytku" << endl;;
}

void PlytaStacjonarna::wpiszDoPliku() {
	fstream plik;
	plik.open("PlytaStacjonarna.txt", ios::out | ios::trunc);
	if (plik.good() == true)
	{
		
		plik << *this;
		plik.close();
		system("cls");
		cout << "Udalo sie zapisac dane w pliku " << endl;
	}
	else
	{
		cout << "Nie udalo sie otworzyc pliku" << endl;
	}
}

void PlytaStacjonarna::wczytajZPliku() {
	fstream plik;
	plik.open("PlytaStacjonarna.txt", ios::in);
	if (plik.good() == true)
	{
		plik >> *this;
		plik.close();
		system("cls");
		cout << "Udalo sie wczytac dane z pliku" << endl;
	}
	else
	{
		cout << "Nie mozna otworzyc pliku" << endl;
	}
}
Producent PlytaStacjonarna::losuj() {
	int a = (rand() % 3 + 1);
	switch (a) {
	case 1:
		return " RASUS ";
		break;
	case 2:
		return " MidBajt ";
		break;
	case 3:
		return " MSC ";
		break;
	default:
		return " NOname ";
	}
}

void PlytaStacjonarna::WymienProcka() {
	cout << "Rozpoczynam wymiane procesora" << endl;
	dzialka();
	cout << "Aktualny procesor" << endl;
	SoketSpec();
	Soket soket1(2012, 2, 2.7, 3);
	cout << "Nowy procesor nr.1 :" << endl;
	soket1.Spec();
	dzialka();
	Soket soket2(2011, 6, 3.4, 6);
	cout << "Nowy procesor nr.2 :" << endl;
	soket2.Spec();
	dzialka();
	cout << "Probuje wstawic procesor nr.1" << endl;
	if (procesor == soket1)
		procesor = soket1;
	dzialka();
	cout << "Probuje wstawic procesor nr.2" << endl;
	if (procesor == soket2)
		procesor = soket2;
	dzialka();
	cout << "Aktualny procesor" << endl;
	SoketSpec();
}

void PlytaStacjonarna::SoketSpec() {
	procesor.Spec();
	dzialka();
}

void PlytaStacjonarna::dzialka() {
	for (int i = 0; i < 50; i++) {
		cout << "=";
	}
	cout << endl;

}

int PlytaStacjonarna::ZwrocLiczbePlyt() {
	return liczbaPlyt;
}



PlytaStacjonarna::~PlytaStacjonarna()
{
	DEBUG("Niszcze plyte glowna")
}
