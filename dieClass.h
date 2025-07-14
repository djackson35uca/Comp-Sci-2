#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;


#ifndef DIE;
#define DIE;

class Die {
private:
	int numberOfSides;
	int faceValue;
public:
    void setNumberOfSides(int numSides);
    void setFaceValue(int fVal);
    int getNumberOfSides() const;
    int getFaceValue() const;
    void roll();
    string describeDie();

};



























#endif;