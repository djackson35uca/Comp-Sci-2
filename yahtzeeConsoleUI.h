#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <vector>
#include <string>
using namespace std;

class ConsoleUI {
public:
    void displayDice(const vector<int>& dice);
    vector<bool> promptReroll();
    int promptCategory(const vector<bool>& usedCategories);
    void displayScore(int score);
    void displayFinalScore(int total);
};

#endif


