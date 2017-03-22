#include "Rencontre.h"
#include <iostream>

using namespace std;

Rencontre::Rencontre()
{

}

Rencontre::~Rencontre()
{

}

void Rencontre::SetDate()
{
	string jour, mois, annee;
	cout << endl << "Entrez le jour du match" << endl;
	cin >> jour;
	this->dateRencontre.SetJour(jour);
	cout << "Entrez le mois du match" << endl;
	cin >> mois;
	this->dateRencontre.SetMois(mois);
	cout << "Entrez l'annee du match" << endl;
	cin >> annee;
	this->dateRencontre.SetAnnee(annee);
}

void Rencontre::SetClubLocal()
{
	cout << "Club local:" << endl;
	this->clubLocal.SetNom();
}

void Rencontre::SetClubInvite()
{
	cout << "Club invite:" << endl;
	this->clubInvite.SetNom();
}

void Rencontre::SetResultat()
{
	this->resultat.SetResultat();
}

string Rencontre::GetJour()
{
	return this->dateRencontre.GetJour();
}

string Rencontre::GetMois()
{
	return this->dateRencontre.GetMois();
}

string Rencontre::GetAnnee()
{
	return this->dateRencontre.GetAnnee();
}

string Rencontre::GetClubLocal()
{
	return this->clubLocal.GetNom();
}

string Rencontre::GetClubInvite()
{
	return this->clubInvite.GetNom();
}

string Rencontre::GetResultat()
{
	return this->resultat.GetResultat();
}