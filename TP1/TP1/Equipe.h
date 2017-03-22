#pragma once
#ifndef EQUIPE_H_
#define EQUIPE_H_
#include "Club.h"

class Equipe
{
public:
	Equipe();
	~Equipe();

	void SetClub();
	void SetNbJoueursTerrain();
	void SetNbGardiens();
	void SetCapitaine();

	string GetClub();
	int GetNbJoueursTerrain();
	int GetNbGardiens();
	string GetCapitaine();

private:
	Club club;
	int nbJoueursTerrain, nbGardiens;
	Joueur capitaine;
};

#endif