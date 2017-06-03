//#include "stdafx.h"
#include "Soket.h"

#ifdef _DEBUG
#define DEBUG(x)
#else
#define DEBUG(x) cout<<x<<endl;
#endif // _DEBUG

// KONSTRUKTORY
Soket::Soket()
{
	DEBUG("Tworze procesor")
	rodzaj = 2011;
	liczbaRdzeni = 4;
	taktowanie = 3.5;
	pamiecCache = 6;

}
Soket::Soket(int rodzaj, int liczbaRdzeni, float taktowanie, int pamiecCache, bool mobilna) {
	this->rodzaj=rodzaj;
	this->liczbaRdzeni=liczbaRdzeni;
	this->taktowanie=taktowanie;
	this->pamiecCache=pamiecCache;
	
}
Soket::Soket(Soket &s) {
	rodzaj = s.rodzaj;
	liczbaRdzeni = s.liczbaRdzeni;
	taktowanie = s.taktowanie;
	pamiecCache = s.pamiecCache;
	
}
// OPERATORY
ostream& operator<<(ostream &o, Soket &s) {
	
	
	 o << s.rodzaj << endl;
	 o << s.liczbaRdzeni << endl;
	 o << s.taktowanie << endl;
	o << s.pamiecCache << endl;
	return o;
	
}
istream& operator >> (istream &o,Soket &p) {
	
	o >> p.rodzaj;

	o >> p.liczbaRdzeni;
	
	o >> p.taktowanie;
	
	
	o >> p.pamiecCache;
	
	return o;
}
bool Soket::operator==(Soket &procesor) {
	if (rodzaj == procesor.rodzaj) {
		cout << "Mozna wymienic" << endl;
		return true;
	}
	else {
		cout << "Nie mozna wymienic, zle gniazdo procesora" << endl;
		return false;
	}
}
Soket& Soket::operator= (const Soket &s) 
{
	rodzaj = s.rodzaj;
	liczbaRdzeni = s.liczbaRdzeni;
	taktowanie = s.taktowanie;
	pamiecCache = s.pamiecCache;
	

	return *this;
}
// METODY
void Soket::Spec() {
	cout << "Dane procesora:" << endl;
	cout << "Liczba Rdzeni : " << pokazLiczbeRdzenie() << endl;
	cout << "Taktowanie Kazdego Rdzeniea : " << pokazTaktowanie() << " GHz" << endl;
	cout << "Gniazdo Procesora : " << pokazRodzaj() << endl;
	cout << "Pamiec Cache : " << pokazPamiec() << " MB" << endl;
}
int Soket::pokazRodzaj() {
	return rodzaj;
}
int Soket::pokazLiczbeRdzenie() {
	return liczbaRdzeni;
}
int Soket::pokazPamiec() {
	return pamiecCache;
}
float Soket::pokazTaktowanie() {
	return taktowanie;
}
void Soket::podkrecProcka() {
	taktowanie = taktowanie*1.2;
}
Soket::~Soket()
{
	DEBUG("Niszcze procesor")
	

	
}
