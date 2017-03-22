#include "Equipe.h"
#include <iostream>

using namespace std;

Equipe::Equipe()
{

}

Equipe::~Equipe()
{

}

void Equipe::SetClub()
{
	this->club.SetNom();
}

void Equipe::SetNbJoueursTerrain()
{
	int number;
	cout << "Entrez le nombre de joueurs presents sur le terrain en meme temps:" << endl;
	cin >> number;
	this->nbJoueursTerrain = number;
}

void Equipe::SetNbGardiens()
{
	int number;
	cout << "Entrez le nombre de gardiens de l'équipe:" << endl;
	cin >> number;
	this->nbGardiens = number;
}

void Equipe::SetCapitaine()
{
	this->capitaine.SetNom();
}

string Equipe::GetClub()
{
	return this->club.GetNom();
}

int Equipe::GetNbJoueursTerrain()
{
	return this->nbJoueursTerrain;
}

int Equipe::GetNbGardiens()
{
	return this->nbGardiens;
}

string Equipe::GetCapitaine()
{
	return this->capitaine.GetNom();
}