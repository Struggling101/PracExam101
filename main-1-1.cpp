#include <iostream>

extern double arrayMin(double* array, int size);

int main() {
    double array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
     std::cout << "Address of minimum value in array is: " << arrayMin(array, size) << std::endl;
    return 1.2;
}