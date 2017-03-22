#pragma once
#ifndef REGLEMENT_H_
#define REGLEMENT_H_
#include <string>

using namespace std;

class Reglement
{
public:
	Reglement();
	~Reglement();

	void SetMonstantSeuil();
	void SetDroits();
	void SetMontantTransfert();
	void SetMontantClub();
	void SetMontantJoueur();

	float GetMontantClub();

private:
	int montantSeuil;
	string droits;
	float montantTransfert, montantClub, montantJoueur;
};

#endif