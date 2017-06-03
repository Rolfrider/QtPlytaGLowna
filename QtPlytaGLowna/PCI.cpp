//#include "stdafx.h"
#include "PCI.h"

#ifdef _DEBUG
#define DEBUG(x)
#else
#define DEBUG(x) cout<<x<<endl;
#endif // _DEBUG

// konstruktory 
PCI::PCI()
{
	DEBUG("Tworze nowe zlocze PCI")

	rodzaj = losujRodzaj();
	producent = losujProducenta();
	pamienc = rand()%6+1;
}
PCI::PCI(bool mobilna):
	rodzaj("karta graficzna"), producent("Qualcomm"), pamienc(2), mobilna(true)
{
	DEBUG("Tworze nowe zlocze PCI")
}
PCI::PCI(string rodzaj, string producent, int pamienc, bool mobilna)
{
	this->rodzaj = rodzaj;
	this->producent = producent;
	this->pamienc = pamienc;
	this->mobilna = mobilna;
	DEBUG("Tworze nowe zlocze PCI")
}
//operatory
ostream& operator<<(ostream &o, PCI &p) {
	o << p.rodzaj << endl;
	 o << p.producent << endl;
	if (p.mobilna == true) {
		 o << p.pamienc << endl;
	}
	else {
		 o << p.pamienc  << endl;
	}
	return o;
}

istream& operator>>(istream &o, PCI &p) {
	
	
	o.ignore(100, '\n');
	getline(o, p.rodzaj);
	getline(o, p.producent);
	o >> p.pamienc;
	return o;
}
//metody
string PCI::losujRodzaj() {
	
	int a = (rand() % 3 + 1);
	switch (a) {
	case 1:
		return " Karta graficzna ";
		break;
	case 2:
		return " Karta sieciowa ";
		break;
	case 3:
		return " Karta dzwiekowa ";
		break;
	default:
		return " Karta niczego ";
	}
}

string PCI::losujProducenta() {
	int a = (rand() % 3 + 1);
	switch (a) {
	case 1:
		return "Masus";
		break;
	case 2:
		return "Minibajt";
		break;
	case 3:
		return "Turbo";
		break;
	default:
		return "NOname";
	}
}

PCI::~PCI()
{
	DEBUG("Niszcze zlocze PCI")
}
