#include "vect_add_one.h"

int incrementAndComputeVectorSum(std::vector<int> v) {
    int total = 0;
    addOneToEach(v);

    for (int i: v) {
        total += i;
    }

    return total;
}
