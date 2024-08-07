#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main() {
    double* array = 0;
    int size = sizeof(array) / sizeof(array[0]);
    double value = 3;
    modifyArray(array, size, value);

    return 0;
}