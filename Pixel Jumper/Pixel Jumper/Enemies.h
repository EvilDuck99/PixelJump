#ifndef ENEMIES_H
#define ENEMIES_H
#include <iostream>
#include <cmath>
#include <string>
#include "EntStats.h"

class gameEnemies
{
public:
	gameEnemies();
	string enemyName; 
	~gameEnemies();

private:

protected: 
	string EnemyName;

};

gameEnemies::gameEnemies()
{
}

gameEnemies::~gameEnemies()
{
}

#endif // !ENEMIES_H
