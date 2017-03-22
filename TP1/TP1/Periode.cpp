#include "Periode.h"
#include <iostream>

using namespace std;

Periode::Periode()
{

}

Periode::~Periode()
{

}

void Periode::SetDuree()
{
	int _duree;
	cout << "Entrez la duree de la periode:" << endl;
	cin >> _duree;
	this->duree = _duree;
}

void Periode::SetNbButsLocal()
{
	int nb;
	cout << "Entrez le nombre de buts comptes par l'equipe locale durant cette periode:" << endl;
	cin >> nb;
	this->nbButsLocal = nb;
}

void Periode::SetNbButsInvite()
{
	int nb;
	cout << "Entrez le nombre de buts comptes par l'equipe invitee durant cette periode:" << endl;
	cin >> nb;
	this->nbButsInvite = nb;
}