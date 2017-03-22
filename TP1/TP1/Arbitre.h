#pragma once
#ifndef ARBITRE_H_
#define ARBITRE_H_

#include "Sportif.h"
#include <string>

using namespace std;

class Arbitre : Sportif
{
public:
	Arbitre();
	~Arbitre();

	void SetNom();
	void SetPrenom();
	void SetLieuDiplome();
	void SetExperience();

	string GetNom();
	string GetPrenom();
	string GetLieuDiplome();
	int GetExperience();

private:
	string nom, prenom, lieu_obtention_diplome;
	int experience;
};

#endif
