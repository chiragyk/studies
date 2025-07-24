#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandom4Digit() {
    return rand() % 9000 + 1000;
}

int main() {
    srand(time(0));
    int num = generateRandom4Digit();
    cout << num;
    return 0;
}
