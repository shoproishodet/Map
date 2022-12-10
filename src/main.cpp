#include <iostream>
#include "Map.hpp"


int main() {
    Map<int, int> map;
    map.Set(1, 2);
    map.Set(2, 3);
    map.Set(-1, 2);
    try {
        std::cout << map.Get(123) << std::endl;
    } catch (const NotFoundExc<int> &exc) {
        std::cerr << "Key not found" << std:: endl;
    }

    return 0;
}
