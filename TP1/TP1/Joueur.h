#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <string>
#include <vector>
#include "Parcours.h"
#include "Club.h"

class Parcours;
class Rupture;
using namespace std;

class Joueur
{
public:
	Joueur();
	~Joueur();

	void SetNom();
	void SetPrenom();
	void SetVille();
	void SetTaille();
	void SetPoids();
	void SetParcours();
	void SetRupture();

	string GetNom();
	string GetPrenom();

private:
	string nom, prenom, ville_naissance;
	float taille, poids;
	Parcours *parcours;
	Rupture *rupture;
};
#endif