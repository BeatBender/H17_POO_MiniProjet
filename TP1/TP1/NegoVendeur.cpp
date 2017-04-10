#include "NegoVendeur.h"
#include <iostream>

NegoVendeur::NegoVendeur()
{
}

NegoVendeur::~NegoVendeur()
{
}


void NegoVendeur::SetMontantDesire()
{
	cout << "Entrez le montant desire de la vente" << endl;
	cin >> this->montant_desire;
	return;
}

void NegoVendeur::SetMontantMin()
{
	cout << "Entrez le montant minimum de vente" << endl;
	cin >> this->montant_min;
	return;
}

void NegoVendeur::SetDuree()
{

}

void NegoVendeur::SetRepresentant(Club* club)
{
	representant = *club;
}

float NegoVendeur::GetMontantDesire()
{
	return montant_desire;
}

float NegoVendeur::GetMontantMin()
{
	return montant_min;
}