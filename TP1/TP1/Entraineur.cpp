#include "Entraineur.h"
#include <iostream>
#include <string>

using namespace std;

Entraineur::Entraineur()
{

}

Entraineur::~Entraineur()
{

}

void Entraineur::SetPrenom()
{
	cout << endl << "Entrez le prenom de l'entraineur: " << endl;
	cin >> this->prenom;
}

void Entraineur::SetNom()
{
	cout << endl << "Entrez le nom de l'entraineur: " << endl;
	cin >> this->nom;
}

void Entraineur::SetLieuObtentionGrade()
{
	cout << endl << "Entrez le lieu d'obtention du grade de l'entraineur: " << endl;
	cin >> this->lieu_obtention_grade;
}

void Entraineur::SetTitres()
{
	bool cont;

	do
	{
		TitresGagne* titre_courant = new TitresGagne;

		titre_courant->SetTitre();
		titre_courant->SetClub();
		titres.push_back(titre_courant);
		cout << endl << "Voulez-vous entrer un autre titre pour cet entraineur? ( 1) oui, 0) non )" << endl;
		cin >> cont;
	}
	while (cont == 1);

}

int Entraineur::GetNbTitres()
{
	return this->titres.size();
}

string Entraineur::GetNom()
{
	return this->nom;
}