#include "NegoAcheteur.h"
#include "Screen.h"
#include <time.h>
#include <iostream>

NegoAcheteur::NegoAcheteur()
{
}

NegoAcheteur::~NegoAcheteur()
{
}

void NegoAcheteur::CreateThread()
{
	this->SetMontantDesire();
	this->SetMontantMax();

	return;
}

void NegoAcheteur::SetMontantDesire()
{
	cout << "Entrez le montant desire de depart de l'acheteur" << endl;
	cin >> this->montant_desire;
	return;
}

void NegoAcheteur::SetMontantMax()
{
	cout << "Entrez le montant maximum accepte par l'acheteur" << endl;
	cin >> this->montant_max;
	return;
}

void NegoAcheteur::SetDuree()
{

}

void NegoAcheteur::SetRepresentant(Club* club)
{
	representant = *club;
}