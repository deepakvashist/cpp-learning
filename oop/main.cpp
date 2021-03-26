#include <iostream>
#include <string>
#include <vector>

#include "car.h"

int main() {
    Car car1 = Car("red", 1);
    Car car2 = Car("blue", 2);
    Car car3 = Car("green", 3);

    car1.IncrementDistance();

    car1.PrintCarData();
    car2.PrintCarData();
    car3.PrintCarData();

    // Pointer and OOP

    std::vector<Car*> cars;
    Car* cp = nullptr;

    std::vector<std::string> colors {"red", "blue", "green"};

    for (int i = 0; i < 100; i++) {
        cp = new Car(colors[i%3], i+1);
        cars.push_back(cp);
    }

    for (Car* cp: cars) {
        cp->IncrementDistance();
    }

    for (Car* cp: cars) {
        cp->PrintCarData();
    }
}
