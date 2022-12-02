/* Write function that deletes all elements divisible by 11 from vector. Pass vector as reference
 
 parameter. Input n - number of elements and elements of vector from console. Print the re-
 sulting vector.

 Hint: To pass test in Gradescope you are expected to print elements of vector with ” ” -
 one space after each element. After the last element no need to put endl, leave it with ” ”. */

// ID: 220879
// Name: Azizbek Savkimov

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void delete_el(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 11 == 0) {
            arr.erase(arr.begin() + i);
        }
    }
}

using namespace std;

int main() {
    vector<int> numbers;
    int size;
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        
        numbers.push_back(value);
    }
    
    delete_el(numbers);
    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}
