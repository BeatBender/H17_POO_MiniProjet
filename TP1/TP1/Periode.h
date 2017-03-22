#pragma once
#ifndef PERIODE_H_
#define PERIODE_H_

class Periode
{
public:
	Periode();
	~Periode();

	void SetDuree();
	void SetNbButsLocal();
	void SetNbButsInvite();

private:
	int duree, nbButsLocal, nbButsInvite;
};

#endif