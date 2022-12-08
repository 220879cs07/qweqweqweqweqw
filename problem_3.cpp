/* Calculate expression, using only functions and variables provided. You cannot call array
elements as arr[i]. You can use only ’+’ and ’/’ operations and numbers from one to three only
to call your array. Precision of number should be 20.
(4.34 + 33 + 89) / (45.5 − 91) */

// ID: 220879
// Name: Azizbek Savkimov

#include <iostream>
#include <iomanip>
using namespace std;

double fun() {
    static double x = 9.34;
    x--;
    return x;
}

void w(float &a, float &b, float &c) {
    c = a - b;
}

void toNegative(float *p) {
    *p *= -1;
}

float important(float *a) {
    *a = *a / 8 + 3;
    return *a;
}

int main () {
    int x1 , x2 , x3;
    float d;
    float arr[] = {45 ,12 ,340};
    char z = 'Y';

    for (int i = 0; i < 4; i++) {
        fun();
    }

    w(*(arr + 0), *(arr + 1), *(arr + 0));

    d = important(&*(arr + 2));
    *(arr + 1) = d + d;
    toNegative(&*(arr + 1));

    double result = (fun() + *(arr + 0) + z) / (d + *(arr + 1));
    cout << setprecision(20) << result << endl;

    return 0;
}
