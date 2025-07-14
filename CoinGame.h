#ifndef COINGAME_H
#define COINGAME_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {

private:
	Coin* coins;
	int numberOfCoins;
	double targetBalance;
	int totalScore;
	int rounds;

public:
	Game() : numberOfCoins(3), targetBalance(1.00), totalScore(0), rounds(0) {
		coins = new Coin[3]{ Coin(5), Coin(10), Coin(25) };
	}

	Game(double target) : numberOfCoins(3), targetBalance(target), totalScore(0), rounds(0) {
		coins = new Coin[3]{ Coin(5), Coin(10), Coin(25) };
	}

	~Game() {
		delete[] coins;
	}

	void flipCoins() {
		for (int i = 0; i < numberOfCoins; i++)
			coins[i].flip();
	}

	//printers
	void printFlipResults() {
		for (int i = 0; i < numberOfCoins; ++i) {
			cout << "Coin " << i + 1 << ": " << coins[i].getCentValue() << " cents - " << coins[i].getSideUp() << endl;
		}
	}

	void printScore() {
		cout << "Current Score: $" << totalScore / 100.0 << endl;
	}

	//getters
	int getRounds() const {
		return rounds;
	}

	int getScore() const {
		return totalScore;
	}

	void playGame() {
		cout << "Target Score: " << targetBalance << endl;

		while (totalScore < static_cast<int>(targetBalance * 100)) {
			++rounds;
			cout << "Round " << rounds << ":" << endl;
			flipCoins();
			printFlipResults();

			for (int i = 0; i < numberOfCoins; ++i) {
				if (coins[i].isItHeads())
					totalScore += coins[i].getCentValue();
			}

			printScore();
		}
		cout << "\nGame over! You reached $" << targetBalance << " in " << rounds << " rounds." << endl;

	}


};

#endif
