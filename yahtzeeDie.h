#ifndef YAHTZEE_DIE
#define YAHTZEE_DIE

#include <iostream>
#include <ctime>
#include <cstdlib>

class Die {

private:
	int numberOfSides;
	int faceValue;


public:

	Die(int sides = 6);
	void roll();
	int getFaceValue() const;

};


#endif