#include "Coin.h"
#include "CoinGame.h"

int main() {

	/*//coin toss
	srand(time(0));

	Coin myCoin;
	int headsCount = 0;
	int tailsCount = 0;

	cout << "Initial side up:" << myCoin.getSideUp() << "\n";

	for (int i = 1; i <= 20; i++) {
		myCoin.flip();
		cout << "Toss" << i << ": " << myCoin.getSideUp() << endl;
		if (myCoin.isItHeads())
			++headsCount;
		else
			++tailsCount;
	}

	cout << endl << "Heads: " << headsCount << endl;
	cout << "Tails: " << tailsCount << endl;*/

	srand(time(0));

	Game game; 
	game.playGame();


	return 0;
}

