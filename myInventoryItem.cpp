#include "inventoryitem.h"

InventoryItem::InventoryItem() {
	this->name = "Kerry";
	this->amt = 40;
	this->price = 100;
}
InventoryItem::InventoryItem(string name, int amt, double price) {
	this->name = name;
	this->amt = amt;
	this->price = price;
}

//set

void InventoryItem::setPrice(double price)  {
	this->price = price;
}

void InventoryItem::setName(string name) {
	this->name = name;
}

void InventoryItem::setAmt(int amt) {
	this->amt = amt;
}

//get
double InventoryItem::getPrice() const {
	return price;
}
string InventoryItem::getName() const {
	return name;
}
int InventoryItem::getAmt() const {
	return amt;
}

string InventoryItem::getItemDescription() {
	return "The quantity of " + name + " is " + to_string(amt) + " They are worth: " + to_string(this->getTotalPrice());
}

double InventoryItem::getTotalPrice() const {
	return price * amt;
}


int main() {
	InventoryItem inventory;

	cout << inventory.getItemDescription() << endl;
	InventoryItem inventory2 = InventoryItem("Bennett", 45, 150);
	InventoryItem inventory3 = InventoryItem("Donovan", 50, 120);

	cout << inventory2.getItemDescription() << endl;
	cout << inventory3.getItemDescription() << endl;

	


}