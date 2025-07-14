#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;

#ifndef DICEHAND;
#define DIICEHAND;


class DiceHand
{
private:
    Die* dice;
    int size;
public:
    void setDiceHand(Die* dH);
    void setSize(int s);
    int getSize() const;
    string displayDiceHand();
    void rollDie(int num);
    void rollAllDice();
};




#endif;