#include <iostream>
#include <string>
#include "room.h"
using namespace std;

Room::Room() : Room("bedroom", 10, 10, 2) {
	
}
Room::Room(string nam, double len, double wid, int numWin) {
	this->name = nam;
	this->length = len;
	this->width = wid;
	this->numberOfWindows = numWin;
}

//get
string Room::getName() const{
	return name;
}
double Room::getLength() const{
	return length;
}
double Room::getWidth() const{
	return width;
}
int Room::getNumberOfWindows() const{
	return numberOfWindows;
}


//set
void Room::setName(string nam) {
	name = nam;
}
void Room::setLength(double len) {
	length = len;
}
void Room::setWidth(double wid) {
	width = wid;
}
void Room::setNumberOfWindows(int num) {
	numberOfWindows = num;
}
double Room::getArea() const{
	return length * width;
}
bool Room::hasNaturalLight() const{
	return numberOfWindows > 0;
}
string Room::describeRoom() const{
	string result = "A " + to_string(getArea()) + " square foot " + name + " " + " with" + (hasNaturalLight() ? " " : "out ") + "natural light.";
	return result;
}

int main() {
	Room myRoom;
	Room yourRoom = Room("bedroom", 10, 20, 0);
	Room kitchen = Room("kitchen", 10, 8, 1);

	cout << myRoom.describeRoom() << endl;
	cout << yourRoom.describeRoom() << endl;
	cout << kitchen.describeRoom() << endl;


}