#pragma once
#ifndef NEGOVENDEUR_H_
#define NEGOVENDEUR_H_
#include "Club.h"
#include "Negociateur.h"

class NegoVendeur:Negociateur
{
public:
	NegoVendeur();
	~NegoVendeur();

	void CreateThread();

private:
	float montant_desire, montant_min, duree;
	Club representant;
};
#endif