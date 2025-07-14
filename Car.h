#ifndef CAR
#define CAR

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string color;
    double price;
    long km;
    string model;
    bool isRunning;
    int position = 0;

public:
    void setColor(string c);
    void setPrice(double p);
    void setKm(long kiloM);
    void setModel(string m);

    string getColor() const;
    double getPrice() const;
    long getKm() const;
    string getModel() const;

    void start();
    void stop();
    void forward(int distance);
    void backward(int distance);
    string describeCar();
};

#endif
