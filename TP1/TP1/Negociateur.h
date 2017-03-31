#pragma once
#ifndef NEGOCIATEUR_H_
#define NEGOCIATEUR_H_

class Negociateur
{
public:
	Negociateur();
	~Negociateur();

	virtual void CreateThread() = 0;

private:

};

#endif