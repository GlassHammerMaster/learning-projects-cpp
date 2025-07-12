#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <iostream>
#include <random>
#include <chrono>
void printArray(const int* arr, int size);
int factorial(int n);
bool isPrime(int n);

// Calculator functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int findLargest(const int* arr, int size);
int findAverage(const std::vector<int>& numbers);

// Random number generation
int generateRandomNumber(int min, int max);

#endif // UTILS_H
