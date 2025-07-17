#include "yahtzeeConsoleUI.h"
#include <iostream>

void ConsoleUI::displayDice(const vector<int>& dice) {
    cout << "Current Dice: ";
    for (int i = 0; i < dice.size(); ++i) {
        cout << "[" << i + 1 << ": " << dice[i] << "] ";
    }
    cout << endl;
}

vector<bool> ConsoleUI::promptReroll() {
    vector<bool> reroll(5);
    cout << "Enter Y to reroll each die (1-5): ";
    for (int i = 0; i < 5; ++i) {
        char input;
        cout << "Die " << i + 1 << ": ";
        cin >> input;
        reroll[i] = (input == 'Y' || input == 'y');
    }
    return reroll;
}

int ConsoleUI::promptCategory(const vector<bool>& usedCategories) {
    cout << "Choose a category to score in (1 = Aces, ..., 6 = Sixes): ";
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 6 || usedCategories[choice - 1]) {
        cout << "Invalid or already used. Try again: ";
        cin >> choice;
    }
    return choice;
}

void ConsoleUI::displayScore(int score) {
    cout << "Scored: " << score << " points.\n";
}

void ConsoleUI::displayFinalScore(int total) {
    cout << "Final score: " << total << "\n";
}
