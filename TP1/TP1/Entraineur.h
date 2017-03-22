#pragma once
#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_
#include <string>
#include <vector>
#include "TitresGagne.h"

using namespace std;
class TitresGagne;

class Entraineur
	
{
public:
	Entraineur();
	~Entraineur();

	void SetNom();
	void SetPrenom();
	void SetLieuObtentionGrade();
	void SetTitres();

	string GetNom();
	int GetNbTitres();

private:
	string nom, prenom, lieu_obtention_grade;
	vector<TitresGagne*> titres;

};
#endif