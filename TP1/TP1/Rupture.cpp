#include "Rupture.h"
#include <iostream>

using namespace std;

Rupture::Rupture()
{
}

Rupture::~Rupture()
{
}

void Rupture::SetJoueur()
{
	cout << "Joueur qui brise son contrat:" << endl;
	this->joueur.SetPrenom();
	this->joueur.SetNom();
}

void Rupture::SetRaison()
{
	string str;
	cout << "Quels sont les raisons qui l'a pousse a quitter son ancien club?" << endl;
	cin >> str;
	this->raison = str;
}

void Rupture::SetNouvClub()
{
	cout << "Nouveau club:" << endl;
	this->nouvClub.SetNom();
}

void Rupture::SetPenalite()
{
	float nb;
	cout << "Quel montant paye-t-il en penalite?" << endl;
	cin >> nb;
	this->penalite = nb;
}

string Rupture::GetJoueur()
{
	return this->joueur.GetPrenom() + " " + this->joueur.GetNom();
}

string Rupture::GetRaison()
{
	return this->raison;
}

string Rupture::GetNouvClub()
{
	return this->nouvClub.GetNom();
}

float Rupture::GetPenalite()
{
	return this->penalite;
}