#pragma once
#ifndef TITRES_H_
#define TITRES_H_

#include <string>
#include "Palmares.h"
#include "Club.h"

class TitresGagne
{
public:
	TitresGagne();
	~TitresGagne();

	void SetTitre();
	void SetClub();

private:
	string titre, club;
};

#endif