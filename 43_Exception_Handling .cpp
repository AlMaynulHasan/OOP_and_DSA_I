#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;

    try {
        if (b == 0)
            throw "Division by zero error!";
        cout << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
