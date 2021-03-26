#include <iostream>

#include "car.h"

void Car::PrintCarData() {
    std::cout << "The distance that the " << this->color << " car " << this->number << " has traveled is: " << this->distance << "\n";
}

void Car::IncrementDistance() {
    this->distance++;
}
