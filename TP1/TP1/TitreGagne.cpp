#include "TitresGagne.h"
#include <iostream>
#include <string>

using namespace std;

TitresGagne::TitresGagne()
{

}

TitresGagne::~TitresGagne()
{

}

void TitresGagne::SetTitre()
{
	cout << endl << "Entrez le titre gagne par l'entraineur: " << endl;
	cin >> this->titre;
}

void TitresGagne::SetClub()
{
	cout << endl << "Entrez le club avec lequel l'entraineur a gagne le titre: " << endl;
	cin >> this->club;
}