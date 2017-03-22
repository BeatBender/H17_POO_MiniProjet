#include "Stade.h"
#include <string>
#include <iostream>

using namespace std;

Stade::Stade()
{

}

Stade::~Stade()
{

}

void Stade::SetCapacite()
{
	cout << endl << "Entrez la capacite (nb de places) du stade:" << endl;
	cin >> this->capacite;
}

void Stade::SetQualite()
{
	cout << endl << "Entrez la qualite du stade ( 1) gazon, 0) tartan):" << endl;
	cin >> this->qualite;
}

void Stade::SetNom()
{
	cout << endl << "Entrez le nom du stade:" << endl;
	cin >> this->nom;
}

void Stade::SetLieu()
{
	cout << endl << "Entrez le lieu du stade:" << endl;
	cin >> this->lieu;
}