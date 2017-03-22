#ifndef PARCOURS_H_
#define PARCOURS_H_
#include <vector>
#include "Club.h"
#include "Date.h"


using namespace std;
class Club;

class Parcours
{
public:
	Parcours();
	~Parcours();

	void SetParcours();

private:
	Club *club_precedent;
	Date date_entree_club_precedent;
};

#endif