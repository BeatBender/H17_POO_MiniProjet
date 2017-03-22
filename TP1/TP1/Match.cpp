#include "Match.h"
#include <iostream>

using namespace std;

Match::Match()
{

}

Match::~Match()
{

}

void Match::SetEquipeLocal()
{
	this->equipeLocal.SetClub();
}

void Match::SetEquipeInvite()
{
	this->equipeInvite.SetClub();
}

void Match::SetPeriode()
{
	Periode *periode = new Periode;
	periode->SetDuree();
	periode->SetNbButsLocal();
	periode->SetNbButsInvite();
	periodes.push_back(periode);
}

void Match::SetResultat()
{
	this->resultat.SetNbButsTotalLocal();
	this->resultat.SetNbButsTotalInvite();
}

string Match::GetEquipeLocal()
{
	return this->equipeLocal.GetClub();
}

string Match::GetEquipeInvite()
{
	return this->equipeInvite.GetClub();
}

string Match::GetResultat()
{
	string score;
	score = to_string(this->resultat.GetNbButsTotalLocal()) + " a " + to_string(this->resultat.GetNbButsTotalInvite());
	return score;
}

list<Periode*> Match::GetPeriodes()
{
	return this->periodes;
}