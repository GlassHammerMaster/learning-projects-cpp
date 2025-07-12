#include <iostream>
#include "utils.h"
#include <random>
#include <chrono>
#include <thread>

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
    int arr[] = {1, 2, 3, 4, 5};
    int largest = findLargest(arr, 5);
    std::cout << "Largest number in the array: " << largest << std::endl;
    std::vector<int> arrVec(arr, arr + 5);
    double average = findAverage(arrVec);
    std::cout << "Average of the array: " << average << std::endl;

    for(int i = 0; i < 5; ++i) {
        std::cout << "Random number generation example:" << std::endl;
        long randomNum = generateRandomNumber(100000000, 999999999);
        std::cout << "Random number between 100000000 and 999999999: " << randomNum << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for 1 second
    }

    return 0;
}