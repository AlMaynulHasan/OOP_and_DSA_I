#include <iostream>

using namespace std;

void x_test(int test) {
    cout << "Inside test" << test << endl;
    if (test) {
        throw test;
    }
}

int main() {
    cout << "start" << endl;

    try {
        cout << "Inside try block" << endl;
        x_test(0);
        x_test(1);
        x_test(2);
    } catch (int i) {
        cout << "catch number" << i << endl;
    }

    cout << "end" << endl;

    return 0;
}
