#include "dieClass.h";
#include "diceHandClass.h";



int main()
{
    srand(time(0));

    Die Die1, Die2, Die3;
    DiceHand hand;

    Die1.setNumberOfSides(20);
    Die2.setNumberOfSides(20);
    Die3.setNumberOfSides(100);

    Die1.setFaceValue(6);
    Die2.setFaceValue(6);
    Die3.setFaceValue(6);

    Die1.roll();
    Die2.roll();
    Die3.roll();

    cout << Die1.describeDie() << endl;
    cout << Die2.describeDie() << endl;
    cout << Die3.describeDie() << endl;

    Die* myDice = new Die[3];
    myDice[0] = Die1;
    myDice[1] = Die2;
    myDice[2] = Die3;

    hand.setSize(3);
    hand.setDiceHand(myDice);

    cout << hand.displayDiceHand() << endl;
    hand.rollAllDice();
    cout << "after rolling all dice -> " << hand.displayDiceHand() << endl;
    hand.rollDie(0);
    hand.rollDie(2);
    cout << "after rolling first and last die -> " << hand.displayDiceHand() << endl;

    delete[] myDice;
}

// Die methods
void Die::setNumberOfSides(int numSides)
{
    numberOfSides = numSides;
}
void Die::setFaceValue(int fVal)
{
    faceValue = fVal;
}
int Die::getNumberOfSides() const
{
    return numberOfSides;
}
int Die::getFaceValue() const
{
    return faceValue;
}
void Die::roll()
{
    faceValue = (rand() % numberOfSides) + 1;
}
string Die::describeDie()
{
    return "The value of the Die is " + to_string(faceValue) +
        " out of " + to_string(numberOfSides);
}

void DiceHand::setDiceHand(Die* dH)
{
    dice = dH;
}
void DiceHand::setSize(int s)
{
    size = s;
}
int DiceHand::getSize() const
{
    return size;
}
string DiceHand::displayDiceHand()
{
    string display = "Dice values: ";
    for (int i = 0; i < size; i++) {
        display += to_string(dice[i].getFaceValue()) + " ";
    }
    return display;
}
void DiceHand::rollDie(int num)
{
    if (num >= 0 && num < size) {
        dice[num].roll();
    }
}
void DiceHand::rollAllDice()
{
    for (int i = 0; i < size; i++) {
        dice[i].roll();
    }
}
