/*Create a class called Room.
Room should have four attributes: name, length, width, numberOfWindows.  Create getters and setters for Room, as well as a constructor that takes in all the attributes as parameters and a default constructor.  Room should also support a describeRoom(): string, getArea(): double and a hasNaturalLight(): bool function.  Create both the .h file and the .cpp file for Room.  Create a separate file (call it a driver) that has a main method.  The main method should create two rooms and display their attributes.
Room
-name: string                       // name of the room, such as bedroom, bathroom, kitchen, etc.
-length: double                   // length of the room
-width: double                    // width of the room
-numberOfWindows: int   // number of windows in the room
+Room()                              // default constructor
+Room(nam: string, len: double, wid: double, numWin: int)  // constructor that specifies all attributes.
+getName(): string             // getter for name
+getLength(): double         // getter for length
+getWidth(): double          // getter for width
+getNumberOfWindows(): int   // getter for number of windows
+setName(nam: string): void    // setter for name
+setLength(len: double): void    // setter for length
+setWidth(wid: double): void    // setter for width
+setNumberOfWindows(num: int): void        // setter for number of windows
+getArea(): double            // returns area of the room (length times width)
+hasNaturalLight(): bool  // returns true if number of windows > 0
+describeRoom(): string  // returns a string describing the room, including name, area, and whether it has natural light.*/

#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
using namespace std;

class Room {

private:
	string name;
	double length;
	double width;
	int numberOfWindows;

public:
	Room();
	Room(string name, double length, double width, int numberOfWindows);

	//get
	string getName() const;
	double getLength() const;
	double getWidth() const;
	int getNumberOfWindows() const;
	//set
	void setName(string name);
	void setLength(double length);
	void setWidth(double width);
	void setNumberOfWindows(int numberOfWindows);
	double getArea() const;
	bool hasNaturalLight() const;
	string describeRoom() const ;
};




#endif
