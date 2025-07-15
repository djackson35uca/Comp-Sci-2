/*Create class called InventoryItem.  Be sure to divide the class into header and specification files.  Then create a driver that creates an array of three inventory items and prints their details to the screen.
InventoryItem
name: string     // name of the item
amt: int             // amount in inventory
InventoryItem()                                     // default constructor
InventoryItem(nam: string, amt: int) // constructor
getName(): string                                 // getter for name
getAmt(): int                                          // getter for amt
setName(nam: string): void               // setter for name
setAmt(num: int): void                        // setter for amt
getItemDescription(): string              // provides the name and amt nicely formatted.
*/
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <iostream>
#include <string>
using namespace std;


class InventoryItem {

private: 

	string name; // name of the item
	int amt; // amount in inventory
	double price;

public: 

	InventoryItem();
	InventoryItem(string name, int amt, double price);
	//set
	void setPrice(double price);
	void setName(string nam); 
	void setAmt(int amt);     
	//get
	double getPrice() const;
	string getName() const;
	int getAmt() const;

	string getItemDescription() ;
	double getTotalPrice() const;
	

};



#endif