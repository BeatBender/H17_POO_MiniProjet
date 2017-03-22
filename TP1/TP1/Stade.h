#include <string>
#ifndef STADE_H_
#define STADE_H_

using namespace std;

class Stade
{
public:
	Stade();
	~Stade();

	void SetCapacite();
	void SetQualite();
	void SetNom();
	void SetLieu();

private:
	int capacite;
	bool qualite;
	string nom, lieu;
};
#endif