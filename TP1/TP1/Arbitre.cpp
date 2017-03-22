#include "Arbitre.h"
#include <iostream>

using namespace std;

Arbitre::Arbitre()
{
}

Arbitre::~Arbitre()
{
}

void Arbitre::SetPrenom()
{
	cout << "Prenom de l'arbitre:" << endl;
	cin >> this->prenom;
}

void Arbitre::SetNom()
{
	cout << "Nom de l'arbitre:" << endl;
	cin >> this->nom;
}

void Arbitre::SetLieuDiplome()
{
	cout << "Lieu d'obtention du diplome:" << endl;
	cin >> this->lieu_obtention_diplome;
}

void Arbitre::SetExperience()
{
	cout << "Nombre de match d'experience:" << endl;
	cin >> this->experience;
}

string Arbitre::GetPrenom()
{
	return this->prenom;
}

string Arbitre::GetNom()
{
	return this->nom;
}

string Arbitre::GetLieuDiplome()
{
	return this->lieu_obtention_diplome;
}

int Arbitre::GetExperience()
{
	return this->experience;
}