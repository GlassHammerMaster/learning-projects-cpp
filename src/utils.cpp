#include <iostream>
#include "utils.h"

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

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