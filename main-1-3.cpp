#include <iostream>

extern double* duplicateArray(double* array, int size);

int main() {
    double* array = 0;
    int size = sizeof(array) / sizeof(array[0]);
    duplicateArray(array, size);
    return 0;
}