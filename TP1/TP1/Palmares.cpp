#include "Palmares.h"
#include "Date.h"
#include <iostream>

using namespace std;

Palmares::Palmares()
{

}

Palmares::~Palmares()
{

}

void Palmares::SetTitre()
{
	string annee, mois, jour;

	cout << endl << "Entrez le titre du club: " << endl;
	cin >> this->titre;
	cout << endl << "Entrez l'annee de l'obtention du titre: " << endl;
	cin >> annee;
	this->date_obtention.SetAnnee(annee);
	cout << endl << "Entrez le mois de l'obtention du titre: " << endl;
	cin >> mois;
	this->date_obtention.SetAnnee(mois);
	cout << endl << "Entrez le jour de l'obtention du titre: " << endl;
	cin >> jour;
	this->date_obtention.SetAnnee(jour);
}

string Palmares::GetTitre()
{
	return this->titre;
}

Date Palmares::GetDatePalmares()
{
	return this->date_obtention;
}