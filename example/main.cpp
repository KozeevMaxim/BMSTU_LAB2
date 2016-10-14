#include <iostream>
#include "calculator.hpp"
int main() {
    float a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum(a, b) << std::endl;
    std::cout << dev(a, b) << std::endl;
    std::cout << mult(a, b) << std::endl;
    std::cout << sub(a, b) << std::endl;
    std::cout << pow(a, b) << std::endl;
    std::cout << sqrt(a) << std::endl;
}
