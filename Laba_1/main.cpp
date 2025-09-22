#include "include/ogres.h"
#include <iostream>

int main() {
    std::string name;
    std::getline(std::cin, name);
    std::cout << RemoveVowels(name) << std::endl;
    return 0;
}