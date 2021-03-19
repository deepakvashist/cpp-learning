#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myMap {
        {1, "C++"},
        {2, "Python"},
        {3, "Golang"}
    };

    std::cout << myMap[1] << "\n";
}
