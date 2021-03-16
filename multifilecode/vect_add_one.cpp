#include "vect_add_one.h"

void addOneToEach(std::vector<int> &v) {
    for (int& i: v) {
        i++;
    }
}
