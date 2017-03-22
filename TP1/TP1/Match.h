#pragma once
#ifndef MATCH_H_
#define MATCH_H
#include <list>
#include "Equipe.h"
#include "Periode.h"
#include "Resultat.h"

class Match
{
public:
	Match();
	~Match();

	void SetEquipeLocal();
	void SetEquipeInvite();
	void SetPeriode();
	void SetResultat();

	string GetEquipeLocal();
	string GetEquipeInvite();
	list <Periode*> GetPeriodes();
	string GetResultat();

private:
	Equipe equipeLocal, equipeInvite;
	list <Periode*> periodes;
	Resultat resultat;
};

#endif