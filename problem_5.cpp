/* Write a function convert(int*, int) which receives an integer array with positive and negative
numbers and its size, and changes them to the opposite(positive/negative) value. For example,
the number -987 after conversion results in 987, and 65 => -65. Input n - number of elements
and elements of array from console. Print the resulting array in main. In function, do not use
arr[i]; use a pointer instead.

Hint: To pass test in Gradescope you are expected to print elements of array with ” ” -
one space after each element. After the last element no need to put endl, leave it with ” ”. */

// ID: 220879
// Name: Azizbek Savkimov

#include <iostream>
using namespace std;

void convert(int* array, int size) {
    for (int i = 0; i < size; i++) {
        *(array + i) = -*(array + i);
    }
}

int main () {
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++) {
        cin >> *(array + i);
    }

    convert(array, size);

    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " ";
    }

    return 0;
}
