#include <iostream>
#include "utils.h"

int main() {
    std::cout << "Welcome to the C++ Learning Speed Project!" << std::endl;

    int result = add(5, 10);
    std::cout << "Addition Result: " << result << std::endl;
    result = subtract(10, 5);
    std::cout << "Subtraction Result: " << result << std::endl;
    result = multiply(5, 10);
    std::cout << "Multiplication Result: " << result << std::endl;
    result = divide(10, 5);
    std::cout << "Division Result: " << result << std::endl;    

    return 0;
}