#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "yahtzeeDie.h"
#include "yahtzeeConsoleUI.h"
#include <vector>
using namespace std;

class GameLogic {
private:
    vector<Die> dice;
    vector<bool> usedCategories;
    vector<int> scores;
    ConsoleUI ui;

public:
    GameLogic();
    void playGame();
    void rollAll();
    void rerollDice(const vector<bool>& reroll);
    int calculateScore(int category);
};

#endif