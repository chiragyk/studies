#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}
