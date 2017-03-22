#ifndef STAFF_H_
#define STAFF_H_

#include <vector>
#include "Personne.h"

class Staff
{
public:
	Staff();
	~Staff();

private:
	vector<Personne*> staff;
};

#endif
