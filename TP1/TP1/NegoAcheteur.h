#pragma once
#ifndef NEGOACHETEUR_H_
#define NEGOACHETEUR_H_
#include "Club.h"
#include "Negociateur.h"
#include <thread>

class NegoAcheteur: Negociateur
{
public:
	NegoAcheteur();
	~NegoAcheteur();

	//void createThread();
	void SetMontantDesire();
	void SetMontantMax();
	void SetDuree();
	void SetRepresentant(Club*);

	float GetMontantDesire();
	float GetMontantMax();

private:
	float montant_desire, montant_max, duree;
	Club representant;
};

#endif