#ifndef ENTSTATS H
#define ENTSTATS_H
#include <iostream>
#include <string>
using namespace std; 


class EntStats
{
public:
	EntStats(double a, double b, int c, int d, int e, double f);
	varHP = a;
	varStrength = b; 
	varSpeed = c;
	varAgility = d; 
	entEndurance = e; 
	doubAttack = f;
	~EntStats();

private:
	double varHP;
	double varStrength;
	int varSpeed;
	int varAgility; 
	int varEndurance; 

protected: 
	int varHP; 
	int varStrength; 
	int varSpeed; 
	int varAgility; 
	int varEndurance;
	double doubAttack;

};

EntStats::EntStats()
{

}

EntStats::~EntStats()
{
}

#endif // !ENTSTATS_H
