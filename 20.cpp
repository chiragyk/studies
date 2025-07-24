#include <iostream>
#include <cmath>
using namespace std;

void findRoots(float a, float b, float c) {
    float d = b * b - 4 * a * c;

    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2 * a);
        float r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different: " << r1 << " and " << r2;
    } else if (d == 0) {
        float r = -b / (2 * a);
        cout << "Roots are real and equal: " << r << " and " << r;
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        cout << "Roots are complex:" << real << " + " << imag << "i and " << real << " - " << imag << "i";
    }
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    findRoots(a, b, c);
    return 0;
}

