#pragma once
#ifndef CONTRAT_H_
#define CONTRAT_H_
#include "Joueur.h"
#include "Reglement.h"

class Joueur;
class Club;
class Contrat
{
public:
	Contrat();
	~Contrat();

	void SetJoueur();
	void SetJoueurRupture();
	void SetNouvClub();
	void SetAncClub();
	void SetReglement();
	void SetDateEntree();
	void SetDateContrat();
	void SetDuree();

	string GetJoueurContractant();
	string GetJoueur();
	Club* GetNouvClub();
	string GetAncClub();
	int GetDuree();
	string GetDateContrat();
	Reglement GetReglement();

private:
	Joueur *joueur;
	Club *nouvClub, *ancClub;
	Reglement reglement;
	int duree;
	Date dateEntree, dateContrat;
};

#endif
