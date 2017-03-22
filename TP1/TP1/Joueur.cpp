#include "Joueur.h"
#include "Rupture.h"
#include <iostream>

using namespace std;

Joueur::Joueur()
{

}

Joueur::~Joueur()
{

}

void Joueur::SetNom()
{
	string nom_joueur;
	cout << "Entrez le nom du joueur" << endl;
	cin >> nom_joueur;
	cout << endl;
	this->nom = nom_joueur;
}

void Joueur::SetPrenom()
{
	string prenom_joueur;
	cout << "Entrez le prenom du joueur" << endl;
	cin >> prenom_joueur;
	cout << endl;
	this->prenom = prenom_joueur;
}

void Joueur::SetVille()
{
	string ville_joueur;
	cout << "Entrez la ville du joueur" << endl;
	cin >> ville_joueur;
	cout << endl;
	this->ville_naissance = ville_joueur;
}

void Joueur::SetTaille()
{
	float taille_joueur;
	cout << "Entrez la taille du joueur" << endl;
	cin >> taille_joueur;
	cout << endl;
	this->taille = taille_joueur;
}

void Joueur::SetPoids()
{
	float poids_joueur;
	cout << "Entrez le poids du joueur" << endl;
	cin >> poids_joueur;
	cout << endl;
	this->poids = poids_joueur;
}

void Joueur::SetParcours()
{
	Parcours* parcours_joueur = new Parcours;
	parcours_joueur->SetParcours();
	this->parcours = parcours_joueur;
}

void Joueur::SetRupture()
{
	Rupture *rupture = new Rupture;

	rupture->SetJoueur();
	rupture->SetNouvClub();
	rupture->SetPenalite();
	rupture->SetRaison();
	this->rupture = rupture;

}

string Joueur::GetNom()
{
	return this->nom;
}

string Joueur::GetPrenom()
{
	return this->prenom;
}