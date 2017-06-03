//#include "stdafx.h"
#include "PlytaMobilna.h"
#define MOBILNA "PlytaMobilna.txt"


PlytaMobilna::PlytaMobilna()
{
	nazwa = "Plyta Mobilna";
	szerokosc = 10.3;
	dlugosc = 4.8;
	waga = 20;
	marka = "Samszong";
	procesor = Soket(2134, 4, 1.6, 1, mobilnaPlyta);
	ram = SzynaPamieci(mobilnaPlyta);
	dodatki.push_back(PCI("Zyroskop", "ZyroInc", 1, mobilnaPlyta));
	dodatki.push_back(PCI("Czujnik swiatla", "CzujInc", 1, mobilnaPlyta));
	dodatki.push_back(PCI("WiFi", "WiFiInc", 500, mobilnaPlyta));
	dodatki.push_back(PCI("Komunikator GSM", "GSMInc", 1, mobilnaPlyta));
}


ostream& operator << (ostream &s, PlytaMobilna &p)
{
	 s << p.marka << endl;
	 s << p.szerokosc << endl;
	 s << p.dlugosc << endl;
	s << p.waga << endl;
	s << p.procesor;
	s << p.ram;
	
	for (int i = 0; i < p.dodatki.size(); i++)
	{
		s << p.dodatki[i] ;
		
	}


	return s;
}

istream& operator >> (istream &o, PlytaMobilna &p)
{
	
	o >> p.marka;
	
	o >> p.szerokosc;
	
	o >> p.dlugosc;
	
	o >> p.waga;
	o >> p.procesor;
	o >> p.ram;
	for (int i = 0; i < p.dodatki.size(); i++) {
		o >> p.dodatki[i];
	}
	return o;
}

void PlytaMobilna::wypiszDane() {
	cout << *this << endl;
}

void PlytaMobilna::stan() {
	cout << "Mobilna plyta gotowa do uzytku" << endl;;
}

void PlytaMobilna::wpiszDoPliku() {
	fstream plik;
	plik.open(MOBILNA, ios::out | ios::trunc);
	if (plik.good() == true)
	{

		plik << *this;
		plik.close();
		
	}
	
}

void PlytaMobilna::wczytajZPliku() {
	fstream plik;
	plik.exceptions(ifstream::failbit | ifstream::badbit);
	plik.open(MOBILNA, ios::in);
	if (plik.good() == true)
	{
		plik >> *this;
		plik.close();
		
		
	}
	
}

PlytaMobilna::~PlytaMobilna()
{
}
