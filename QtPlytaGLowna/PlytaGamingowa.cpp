//#include "stdafx.h"
#include "PlytaGamingowa.h"
#define GAMINGOWA "PlytaGamingowa.txt"

PlytaGamingowa::PlytaGamingowa()
{
	nazwa = "Plyta Gamingowa";
	podswietlenieRGB = "Krwisto czerwony";
	cechySzczegolne = "Drapiezny wyglad";
	material = "Czysty stop aluminium";
	wsparcieVR = true;
	nvidiaSLI = true;
	szerokosc = 305;
	dlugosc = 244;
	waga = 222.1;
	liczbaPlyt++;
	liczbaSzyn = 4;
	wejsciaPCI = 3;
	szynyZajete = 2;
	PCIzajete = 2;
	karty.clear();
	RAM.clear();
	RAM.reserve(liczbaSzyn);// Rezerwuje nam miejsce na max tyle elementów ile jest szyn
	if (liczbaSzyn != 0)
	{
		for (int i = 0; i < szynyZajete; i++)
		{
			RAM.push_back(SzynaPamieci(16, 2400));
		}
	}
	if (wejsciaPCI != 0)
	{
		for (int i = 0; i < PCIzajete-1; i++)
		{
			karty.push_back(PCI());
		}

		karty.push_back(PCI("Karta graficzna", "Zotac", 8));
	}
}


ostream& operator << (ostream &s, PlytaGamingowa &p) {
	 s << p.marka << endl;
	 s << p.szerokosc << endl;
	 s << p.dlugosc << endl;
	 s << p.waga << endl;
	 s << p.liczbaSzyn << endl;;
	 s << p.szynyZajete << endl;
	 s << p.wejsciaPCI << endl;
	 s << p.PCIzajete << endl;
	 s << p.podswietlenieRGB << endl;
	 s << p.cechySzczegolne << endl;
	 s << p.material << endl;
	s << p.procesor;
	for (int i = 0; i < p.RAM.size(); i++) {
		s << p.RAM[i];
	}
	for (int i = 0; i < p.karty.size(); i++) {
		
		s << p.karty[i];
	}
	return s;
}

istream& operator >> (istream &o, PlytaGamingowa &p) {
	getline(o, p.marka);
	o >> p.szerokosc;
	o >> p.dlugosc;
	o >> p.waga;
	o >> p.liczbaSzyn;
	o >> p.szynyZajete;	
	o >> p.wejsciaPCI;
	o >> p.PCIzajete;	
	o.ignore(100, '\n');
	getline(o, p.podswietlenieRGB);
	getline(o, p.cechySzczegolne);
	getline(o, p.material);
	o >> p.procesor;
	
	
	for (int i = 0; i < p.RAM.size(); i++) {
		o >> p.RAM[i];
	}
	for (int i = 0; i < p.karty.size(); i++) {
		o >> p.karty[i];
	}
	return o;
}

void PlytaGamingowa::wypiszDane() {
	cout << *this << endl;;
}

void PlytaGamingowa::stan() {
	cout << "Gamingowa plyta gotowa do uzytku" << endl;;
}
void PlytaGamingowa::wpiszDoPliku() {
	fstream plik;
	plik.open(GAMINGOWA, ios::out | ios::trunc);
	if (plik.good() == true)
	{

		plik << *this;
		plik.close();
		
	}
	else
	{
		cout << "Nie udalo sie otworzyc pliku" << endl;
	}
}

void PlytaGamingowa::wczytajZPliku() {
	fstream plik;
	plik.exceptions(ifstream::failbit | ifstream::badbit);
	plik.open(GAMINGOWA, ios::in);
	if (plik.good() == true)
	{
		plik >> *this;
		plik.close();
		
	}
	else
	{
		cout << "Nie mozna otworzyc pliku" << endl;
	}
}
PlytaGamingowa::~PlytaGamingowa()
{
}
