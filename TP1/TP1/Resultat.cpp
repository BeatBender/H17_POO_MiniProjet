#include "Resultat.h"
#include <iostream>

using namespace std;

Resultat::Resultat()
{
}

Resultat::~Resultat()
{
}

void Resultat::SetNbButsTotalLocal()
{
	int nb;
	cout << "Entrez le nombre de buts total de l'equipe locale:" << endl;
	cin >> nb;
	this->nbButsTotalLocal = nb;
	
}

void Resultat::SetNbButsTotalInvite()
{
	int nb;
	cout << "Entrez le nombre de buts total de l'equipe invitee:" << endl;
	cin >> nb;
	this->nbButsTotalInvite = nb;
}

int Resultat::GetNbButsTotalLocal()
{
	return this->nbButsTotalLocal;
}

int Resultat::GetNbButsTotalInvite()
{
	return this->nbButsTotalInvite;
}