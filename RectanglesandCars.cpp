#include "Car.h";
using namespace std;

/*class Rectangle {
private:
	int width;
	int length;
	int area;

public:
	void setWidth(int w);
	void setLength(int l);

	int getWidth() const;
	int getLength() const;
	int getArea() const;
};*/

/*class Car {
private:
	string color;
	double price;
	long km;
	string model;
	bool isRunning;
	int position = 0;

public:
	void setColor(std::string c) {
		color = c;
	}
	void setPrice(double p);
	void setKm(long kiloM);
	void setModel(string m);

	std::string getColor()const;
	double getPrice()const;
	long getKm()const;
	string getModel()const;

	void start();
	void stop();
	void forward(int distance);
	void backward(int distance);
	string describeCar();

};*/

int main() {

	/*Rectangle myR;
	myR.setWidth(4);
	myR.setLength(6);
	
	cout << myR.getWidth() << endl
		<< myR.getLength() << endl << myR.getArea();*/

	Car myCar, yourCar;

	myCar.setColor("Gray");
	myCar.setModel("Cherokee");
	myCar.setKm(50000);
	myCar.setPrice(30000);

	yourCar.setColor("Purple");
	yourCar.setModel("Porsche");
	yourCar.setKm(100);
	yourCar.setPrice(50000);

	cout << myCar.describeCar();
	
}

/*void Rectangle::setWidth(int w) {
	width = w;
}

void Rectangle::setLength(int l) {
	length = l;
}

int Rectangle::getWidth() const{
	return width;
}


int Rectangle::getLength() const{
	return length;
}

int Rectangle::getArea() const{
	return length * width;
}
*/
void Car::start() {
	isRunning = true;
}
void Car::stop() {
	isRunning = false;
}
void Car::forward(int distance) {
	position += distance;
}
void Car::backward(int distance) {
	position -= distance;
}
//setters

void Car::setColor(string c) {
	color = c;
}
void Car::setPrice(double p) {
	price = p;
}
void Car::setKm(long kiloM) {
	km = kiloM;
}
void Car::setModel(string m) {
	model = m;
}

//getters

std::string Car::getColor()const {
	return color;
}
double Car::getPrice()const {
	return price;
}
long Car::getKm()const {
	return km;
}
string Car::getModel()const {
	return model;
}
string Car::describeCar() {
	return
		"A " + color + " " + model +
		" that is worth $" + to_string(price) + " with " +
		to_string(km) + " kilometers.";
}
