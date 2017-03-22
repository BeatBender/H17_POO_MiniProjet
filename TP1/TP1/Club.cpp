#include "Club.h"
#include "Joueur.h"
#include "Entraineur.h"
#include <iostream>

class Entraineur;
using namespace std;

void Club::SetNom()
{
	string nom_club;
	cout << "Entrez le nom du club:" << endl;
	cin >> nom_club;
	cout << endl;
	this->nom = nom_club;
}

void Club::SetHistoire()
{
	string histoire_club;
	cout << "Entrez l'histoire du club:" << endl;
	cin >> histoire_club;
	cout << endl;
	this->histoire = histoire_club;
}

void Club::SetCouleur()
{
	string couleur_club;
	cout << "Entrez la couleur du club:" << endl;
	cin >> couleur_club;
	cout << endl;
	this->couleur = couleur_club;
}

void Club::SetVille()
{
	string ville_club;
	cout << "Entrez la ville du club:" << endl;
	cin >> ville_club;
	cout << endl;
	this->ville = ville_club;
}

void Club::SetDate()
{
	string annee, mois, jour;
	cout << "Entrez l'année de création du club:" << endl;
	cin >> annee;
	cout << endl << "Entrez le mois de création du club" << endl;
	cin >> mois;
	cout << endl << "Entrez le jour de création du club" << endl;
	cin >> jour;
	this->annee_creation.SetAnnee(annee);
	this->annee_creation.SetMois(mois);
	this->annee_creation.SetJour(jour);
}

void Club::SetEffectif()
{
	bool cont;
	do
	{
		cout << "Entrez les informations du joueur:" << endl;
		Joueur* joueur_courant;
		joueur_courant = new Joueur;
		joueur_courant->SetNom();
		joueur_courant->SetPrenom();
		joueur_courant->SetVille();
		joueur_courant->SetTaille();
		joueur_courant->SetPoids();
		joueur_courant->SetParcours();
		effectif.push_back(joueur_courant);
		cout << endl << "Voulez-vous entrer un autre joueur?" << endl << "1) oui" << endl << "0) non :" << endl;
		cin >> cont;
	} while (cont == 1);
}

void Club::SetPalmares()
{
	string titre, annee, mois, jour;
	bool cont;

	do {
		cout << endl << "Entrez le titre gagne du club:" << endl;
		cin >> titre;
		this->palmares.GetTitre() = titre;
		this->titres.push_back(titre);
		cout << endl << "Entrez l'annee d'obtention du titre:" << endl;
		cin >> annee;
		this->palmares.GetDatePalmares().SetAnnee(annee);
		cout << endl << "Entrez le mois d'obtention du titre:" << endl;
		cin >> mois;
		this->palmares.GetDatePalmares().SetMois(mois);
		cout << endl << "Entrez le jour d'obtention du titre:" << endl;
		cin >> jour;
		this->palmares.GetDatePalmares().SetJour(jour);
		cout << endl;

		cout << endl << "Voulez-vous entrer un autre titre? 1) oui 0) non:" << endl;
		cin >> cont;
	} while (cont == 1);
}

void Club::SetStade()
{
	this->stade.SetNom();
	this->stade.SetCapacite();
	this->stade.SetQualite();
	this->stade.SetLieu();
}

void Club::SetStaff()
{
	bool cont = 1;
	Personne* personne_courante = new Personne;
	do
	{
		cout << "Informations sur le staff du club:" << endl;
		personne_courante->SetNom();
		personne_courante->SetAge();
		personne_courante->SetRole();

		if (personne_courante->GetRole() == "entraineur" || personne_courante->GetRole() == "Entraineur")
		{
			Entraineur* entraineur_courant = new Entraineur;
			entraineur_courant->SetNom();
			entraineur_courant->SetPrenom();
			entraineur_courant->SetLieuObtentionGrade();
			entraineur_courant->SetTitres();
			entraineurs.push_back(entraineur_courant);
		}

		staff.push_back(personne_courante);
		cout << endl << "Voulez-vous ajouter une autre personne au staff? 1) oui, 0) non :" << endl;
		cin >> cont;
	} while (cont == 1);
}

string Club::GetNom()
{
	return this->nom;
}

Palmares Club::GetPalmares()
{
	Palmares* palmares_courant = new Palmares;

	palmares_courant->GetTitre();
	return *palmares_courant;
}

int Club::GetNbTitres()
{
	return this->titres.size();
}

vector<Entraineur*> Club::GetEntraineurs()
{
	return this->entraineurs;
}

void Club::AfficherJoueurs()
{
	for (int i = 0; i < effectif.size(); i++)
	{
		cout << this->effectif[i]->GetNom() << ", " <<  this->effectif[i]->GetPrenom() << endl;
	}
}

vector<Contrat*> Club::GetContrat()
{
	return this->contrats;
}

void Club::AddContrat(Contrat* _C)
{
	contrats.push_back(_C);
}


Club::Club()
{

}

Club::~Club()
{

}