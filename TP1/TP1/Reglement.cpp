#include "Reglement.h"
#include <iostream>

using namespace std;

Reglement::Reglement()
{

}

Reglement::~Reglement()
{

}

void Reglement::SetMonstantSeuil()
{
	cout << "Entrez un montant seuil pour le joueur:" << endl;
	cin >> this->montantSeuil;
}

void Reglement::SetDroits()
{
	cout << "Entrez les droits du joueur:" << endl;
	cin >> this->droits;
}

void Reglement::SetMontantTransfert()
{
	cout << "Entrez le montant total du transfert du joueur:" << endl;
	cin >> this->montantTransfert;
}

void Reglement::SetMontantClub()
{
	cout << "Entrez le montant encaissé par le club:" << endl;
	cin >> this->montantClub;
}

void Reglement::SetMontantJoueur()
{
	cout << "Entrez le montant restant encaissé par le joueur:" << endl;
	cin >> this->montantJoueur;
}

float Reglement::GetMontantClub()
{
	return this->montantClub;
}