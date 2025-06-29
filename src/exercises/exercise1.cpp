// Exercise 1: Implement a simple calculator
// 
// Description:
// In this exercise, you will create a simple calculator that can perform
// addition, subtraction, multiplication, and division. You will need to
// implement the following functions:
// 
// 1. add(int a, int b): Returns the sum of a and b.
// 2. subtract(int a, int b): Returns the difference of a and b.
// 3. multiply(int a, int b): Returns the product of a and b.
// 4. divide(int a, int b): Returns the quotient of a and b. Make sure to handle
//    division by zero appropriately.
// 
// You can use the following template to implement the functions:

#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    // Test your functions here
    int a = 10;
    int b = 5;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    std::cout << "Division: " << divide(a, b) << std::endl;

    return 0;
}

// Implement the functions below this line

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        std::cerr << "Division by zero error!" << std::endl;
        return 0.0;
    }
}