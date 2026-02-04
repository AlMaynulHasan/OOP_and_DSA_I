#include <iostream>
using namespace std;

int function(int a) {
    return a * a;
}

int function(int a, int b=0) {
    return a + b;
}

int main() {
    cout << function(10, 20) << endl; // Calls two-parameter version → 30
    cout << function(10) << endl;     // Calls one-parameter version → 100
    return 0;
}

