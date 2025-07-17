#include "yahtzeeGameLogic.h"
#include "yahtzeeConsoleUI.h"
#include <algorithm>

GameLogic::GameLogic() : dice(5, Die()), usedCategories(6, false), scores(6, 0) {}

void GameLogic::playGame() {
    for (int turn = 0; turn < 6; ++turn) {
        rollAll();
        ui.displayDice({ dice[0].getFaceValue(), dice[1].getFaceValue(),
                        dice[2].getFaceValue(), dice[3].getFaceValue(),
                        dice[4].getFaceValue() });

        for (int r = 0; r < 2; ++r) {
            vector<bool> reroll = ui.promptReroll();
            rerollDice(reroll);
            ui.displayDice({ dice[0].getFaceValue(), dice[1].getFaceValue(),
                            dice[2].getFaceValue(), dice[3].getFaceValue(),
                            dice[4].getFaceValue() });
        }

        int category = ui.promptCategory(usedCategories);
        usedCategories[category - 1] = true;
        int score = calculateScore(category);
        scores[category - 1] = score;
        ui.displayScore(score);
    }

    int total = 0;
    for (int s : scores)
        total += s;
    ui.displayFinalScore(total);
}

void GameLogic::rollAll() {
    for (auto& d : dice) d.roll();
}

void GameLogic::rerollDice(const vector<bool>& reroll) {
    for (int i = 0; i < dice.size(); ++i) {
        if (reroll[i]) dice[i].roll();
    }
}

int GameLogic::calculateScore(int category) {
    int value = category;
    int score = 0;
    for (auto& d : dice) {
        if (d.getFaceValue() == value) score += value;
    }
    return score;
}
