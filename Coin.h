#ifndef COIN_H
#define COIN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


class Coin {
private:
	bool isHeads;
	const int centValue;
	string sideUp;

	void updateSideUp() {
		sideUp = isHeads ? "Heads" : "Tails";
	}

public:

	//default constructor, default value is 1
	Coin() : centValue(1) {
		flip();
	}

	//specified value constructor 
	Coin(int value) : centValue(value) {
		flip();
	}

	//flip the coin
	void flip() {
		isHeads = rand() % 2 == 0;
		updateSideUp();
	}

	//return whether its heads
	bool isItHeads() const {
		return isHeads;
	}

	//getters
	//return side up as a string
	string getSideUp() const {
		return sideUp;
	}

	//return cent value
	int getCentValue() const {
		return centValue;
	}




};


#endif
