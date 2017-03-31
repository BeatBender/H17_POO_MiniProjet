#pragma once
#ifndef NEGOACHETEUR_H_
#define NEGOACHETEUR_H_
#include "Club.h"
#include "Negociateur.h"

class NegoAcheteur: Negociateur
{
public:
	NegoAcheteur();
	~NegoAcheteur();

	void CreateThread();

private:
	float montant_desire, montant_max, duree;
	Club representant;
};

#endif