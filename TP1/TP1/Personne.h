#pragma once
#ifndef PERSONNE_H_
#define PERSONNE_H_
#include <string>
#include "Club.h"

using namespace std;

class Personne
{
public:
	Personne();
	~Personne();

	void SetNom();
	void SetRole();
	void SetAge();

	string GetRole();

private:
	string nom, role;
	int age;

};
#endif