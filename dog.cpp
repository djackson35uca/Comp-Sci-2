#include "dog.h"

Dog::Dog() : age(10), name("Clifford"), breed("Big Red"){
	
}
Dog::Dog(int age, string name, string breed) 
	: age(age), name(name), breed(breed) {
	
}


//get
int Dog::getAge() const {
	return age;
}
int Dog::getAgeInDogYears() const {
	return age * 7;
}
string Dog::getName() const {
	return name;
}
string Dog::getBreed() const {
	return breed;
}


//set
void Dog::setAge(int a) {
	age = a;
}
void Dog::setName(string n) {
	name = n;
}


string Dog::describe() const {
	return name + " is a " + to_string(getAge()) + " year old " + breed + ".";
}


string Dog::sit() const {
	return name + " knows how to sit on command";
}
string Dog::rollOver() const {
	return name + " rolls to their other side when laying down on command";
}


int main() {

	Dog myDog(9, "Dax", "Australian Shepard");
	Dog yourDog(1, "Luna", "Pitbull");


	cout << myDog.describe() << endl;
	cout << myDog.getName() << " is " << myDog.getAgeInDogYears() 
		<< " years old in dog years." << endl;
	cout << myDog.sit() << endl;
	cout << myDog.rollOver() << endl;

	cout << endl;

	cout << yourDog.describe() << endl;
	cout << yourDog.getName() << " is " << yourDog.getAgeInDogYears()
		<< " years old in dog years." << endl;
	cout << yourDog.sit() << endl;
	cout << yourDog.rollOver() << endl;



}