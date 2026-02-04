#include <iostream>
using namespace std;

// Function for accepts float
float function(float i) {
    return i + i;
}

// Function for accepts double
double function(double i) {
    return i * i;
}

int main() {
    float x = 2.50;
    double y = 3.50;

    cout << function(x) << endl;       // function 1 called (float)
    cout << function(y) << endl;       // function 2 called (double)
    cout << function(5.55) << endl;   // confused? → 20.55 is double, so function 2 is called

    return 0;
}

