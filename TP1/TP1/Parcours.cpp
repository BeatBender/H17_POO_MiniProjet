#include "Parcours.h"
#include <iostream>

using namespace std;

Parcours::Parcours()
{

}

Parcours::~Parcours()
{

}

void Parcours::SetParcours()
{
	string annee, mois, jour;
	Club* club_precedent_joueur = new Club;
	Date date_club_precedent;
	cout << "Informations du club precedent auquel appartenait le joueur: " << endl;
	club_precedent_joueur->SetNom();
	club_precedent_joueur->SetVille();
	cout << "Entrez l'annee de l'entree dans le club precedent" << endl;
	cin >> annee;
	date_club_precedent.SetAnnee(annee);
	cout << endl << "Entrez le mois de l'entree dans le club precedent" << endl;
	cin >> mois;
	date_club_precedent.SetMois(mois);
	cout << endl << "Entrez le jour de l'entree dans le club precedent" << endl;
	cin >> jour;
	cout << endl;
	date_club_precedent.SetJour(jour);
	this->club_precedent = club_precedent_joueur;
}