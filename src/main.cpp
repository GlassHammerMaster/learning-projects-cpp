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
    bool prime = isPrime(7);
    std::cout << "Is 7 a prime number? " << (prime ? "Yes" : "No") << std::endl;
    int arr[] = {1, 2, 3, 4, 5, 2};
    int largest = findLargest(arr, 6);
    std::cout << "Largest number in the array: " << largest << std::endl;

    return 0;
}