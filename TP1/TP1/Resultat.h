#pragma once
#ifndef RESULTAT_H_
#define RESULTAT_H_

class Resultat
{
public:
	Resultat();
	~Resultat();

	void SetNbButsTotalLocal();
	void SetNbButsTotalInvite();

	int GetNbButsTotalLocal();
	int GetNbButsTotalInvite();

private:
	int nbButsTotalLocal, nbButsTotalInvite;
};

#endif