#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
    public:
        void PrintCarData();
        void IncrementDistance();

        Car(std::string c, int n) : color(c), number(n) {}

    private:
        std::string color;
        int distance = 0;
        int number;
};

#endif
