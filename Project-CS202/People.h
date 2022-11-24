#pragma once
#include "head.h"
#include "Console.h"
#include "cPosition.h"
#include "Enemy.h"
#include "cBird.h"
#include "cCar.h"
#include "cDinosaur.h"
#include "cTruck.h"

class People{
private:
	cPosition pos;
	bool isDead;
	char **a;  //a[3][5]
	char **emptyPlayer;
	int length = 5, width = 3;
public:
	People(); // set default position
	cPosition getPos();
	People(cPosition pos); // set current position when load game
	~People();
	void Up();
	void Down();
	void Right();
	void Left();
	bool checkIsDead();
	void killPlayer(); // set isDead
	char **shape();
	char **emptyShape();
	int getlength();
	int getwidth();
	int getX();
	int getY();
	bool crash(cPosition pos, int w, int h);
	void sound();
};
