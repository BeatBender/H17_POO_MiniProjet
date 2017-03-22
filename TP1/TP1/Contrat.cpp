#include "Contrat.h"
#include <iostream>

using namespace std;

Contrat::Contrat()
{

}

Contrat::~Contrat()
{

}

void Contrat::SetJoueur()
{
	bool ok;
	cout << "Est-ce que le joueur brise un contrat pour rejoindre ce club? (0.Non , 1:Oui)" << endl;
	cin >> ok;
	if (ok)
	{
		SetJoueurRupture();
	}
	else 
	{
		Joueur *joueurcourant = new Joueur;
		cout << "Joueur contractant: " << endl;
		joueurcourant->SetPrenom();
		joueurcourant->SetNom();
		this->joueur = joueurcourant;
	}
	
}

void Contrat::SetJoueurRupture()
{
	Joueur *joueurcourant = new Joueur;
	cout << "Joueur contractant: " << endl;
	joueurcourant->SetPrenom();
	joueurcourant->SetNom();
	joueurcourant->SetRupture();
	this->joueur = joueurcourant;
}

void Contrat::SetNouvClub()
{
	Club *clubcourant = new Club;
	cout << "Nouveau club du joueur:" << endl;
	clubcourant->SetNom();
	this->nouvClub = clubcourant;
}

void Contrat::SetAncClub()
{
	Club *clubcourant = new Club;
	cout << "Ancien club du joueur:" << endl;
	clubcourant->SetNom();
	this->ancClub = clubcourant;
}

void Contrat::SetReglement()
{
	this->reglement.SetMonstantSeuil();
	this->reglement.SetDroits();
	this->reglement.SetMontantTransfert();
	this->reglement.SetMontantClub();
	this->reglement.SetMontantJoueur();
}

void Contrat::SetDateEntree()
{
	string jour, mois, annee;
	cout << "Entrez le jour d'entree dans le club: "<< endl;
	cin >> jour;
	this->dateEntree.SetJour(jour);
	cout << "Entrez le mois d'entree dans le club: " << endl;
	cin >> mois;
	this->dateEntree.SetMois(mois);
	cout << "Entrez le annee d'entree dans le club: " << endl;
	cin >> annee;
	this->dateEntree.SetAnnee(annee);
}

void Contrat::SetDateContrat()
{
	string jour, mois, annee;
	cout << "Entrez le jour de signature du contrat: " << endl;
	cin >> jour;
	this->dateContrat.SetJour(jour);
	cout << "Entrez le mois de signature du contrat: " << endl;
	cin >> mois;
	this->dateContrat.SetMois(mois);
	cout << "Entrez l'annee de signature du contrat: " << endl;
	cin >> annee;
	this->dateContrat.SetAnnee(annee);
}

void Contrat::SetDuree()
{
	cout << "Entrez une duree de contrat: " << endl;
	cin >> this->duree;
}

string Contrat::GetJoueur()
{
	return this->joueur->GetPrenom() + " " + this->joueur->GetNom();
}

Club* Contrat::GetNouvClub()
{
	return this->nouvClub;
}

string Contrat::GetAncClub()
{
	return this->ancClub->GetNom();
}

int Contrat::GetDuree()
{
	return this->duree;
}

string Contrat::GetDateContrat()
{
	return this->dateContrat.GetJour() + "/" + this->dateContrat.GetMois() + "/" + this->dateContrat.GetAnnee();
}

Reglement Contrat::GetReglement()
{
	return this->reglement;
}

/*string Contrat::GetJoueurContractant()
{
	int choix;

	cout << "Choisissez le joueur contractant:" << endl;

	for (int i = 0; i < nouvClub->GetEffectif().size(); i++)
	{
		cout << i + ") " + nouvClub->GetEffectif().at(i).GetPrenom() + nouvClub->GetEffectif().at(i).GetNom() << endl;
	}

	cin >> choix;
	return nouvClub->GetEffectif().at(choix).GetPrenom() + " " + nouvClub->GetEffectif().at(choix).GetNom();
}*/