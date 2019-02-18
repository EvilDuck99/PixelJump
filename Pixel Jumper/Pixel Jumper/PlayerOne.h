#ifndef PLAYERONE_H
#define PLAYERONE_H
#include 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class PlayerOne
{
public:
	PlayerOne();
	PlayerLevel(int x);
	PlayerName(string name);
	PlayerExp(int y);
	strName = name;
	varLevel = x; 
	varExp = y;
	~PlayerOne();


private:
	int varLevel; 
	int varExp;  

protected: 
	int varLevel;
	int varExp;
	string strName; 

};

PlayerOne::PlayerOne()
{

}

PlayerOne::~PlayerOne()
{

}



#endif // !PLAYERONE_H
