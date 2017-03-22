#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;

Personne::Personne()
{

}

Personne::~Personne()
{

}

void Personne::SetNom()
{
	cout << endl << "Entrez le nom de la personne:" << endl;
	cin >> this->nom;
}

void Personne::SetRole()
{
	cout << endl << "Entrez le role de la personne:" << endl;
	cin >> this->role;
}

void Personne::SetAge()
{
	cout << endl << "Entrez l'age de la personne:" << endl;
	cin >> this->age;
}

string Personne::GetRole()
{
	return this->role;
}