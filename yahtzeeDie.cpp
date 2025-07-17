#include "yahtzeeDie.h"

Die::Die(int sides) : numberOfSides(sides) {
	srand(static_cast<unsigned int>(time(0)));
	roll();
}

void Die::roll() {
	faceValue = rand() % numberOfSides + 1;
}

int Die::getFaceValue() const {
	return faceValue;
}
