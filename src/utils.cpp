#include <iostream>
#include "utils.h"

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
bool isPrime(int n);

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

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}