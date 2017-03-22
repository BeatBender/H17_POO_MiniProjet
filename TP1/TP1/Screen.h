#pragma once
#ifndef SCREEN_H_
#define SCREEN_H_

#include "Entraineur.h"
#include "Club.h"

class Screen
{
public:
	Screen();
	~Screen();
	void InitMainMenu();
	void CreateClub();
	void AfficherClubs();
	void SuppClub();
	void AfficherJoueursClub();
	void AjouterJoueur();
	void RechercheEntraineurTitre();
	void RechercheClubTitre();
	void CreateGame();
	void AfficherCalendrier();
	void SuppRencontre();
	void CreateContrat();
	void AfficherMontantClub();
	void AfficherScore();
	
private:

};
#endif