#pragma once
#ifndef RENCONTRE_H_
#define RENCONTRE_H_
#include "Date.h"
#include "Club.h"
#include "Match.h"

class Rencontre
{
public:
	Rencontre();
	~Rencontre();

	void SetDate();
	void SetClubLocal();
	void SetClubInvite();
	void SetResultat();

	string GetJour();
	string GetMois();
	string GetAnnee();
	string GetClubLocal();
	string GetClubInvite();
	string GetResultat();

private:
	Date dateRencontre;
	Club clubLocal, clubInvite;
	Match resultat;
};

#endif
