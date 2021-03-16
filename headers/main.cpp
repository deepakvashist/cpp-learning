#include <iostream>
#include <vector>

#include "header_practice.h"

int incrementAndComputeVectorSum(std::vector<int> v) {
    int total = 0;
    addOneToEach(v);

    for (int i: v) {
        total += i;
    }

    return total;
}

void addOneToEach(std::vector<int> &v) {
    for (int& i: v) {
        i++;
    }
}

int main () {
    std::vector<int> v {1, 2, 3, 4, 5};
    int total = incrementAndComputeVectorSum(v);
    std::cout << "The total is: " << total << "\n";
}
