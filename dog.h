#ifndef DOG_H
#define DOG_H


#include <iostream>
#include <string>
using namespace std;

class Dog {

private:
	
	int age;
	string name;
	const string breed;

public:

	Dog();
	Dog(int age, string name, string breed);
	
	//get
	int getAge() const;
	int getAgeInDogYears() const;
	string getName() const;
	string getBreed() const;

	//set
	void setAge(int age);
	void setName(string name);

	string describe() const;

	string sit() const;
	string rollOver() const;




};

#endif