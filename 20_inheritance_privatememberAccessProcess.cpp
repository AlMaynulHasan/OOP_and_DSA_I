#include <iostream>
using namespace std;

class Base {
    int x;
public:
    void setx(int n) {
        x = n;
    }
    int getx() {        // Provide accessor for derived class
        return x;
    }
    void showx() {
        cout << x << "\n";
    }
};

class A : public Base {
    int y;
public:
    void sety(int n) {
        y = n;
    }

    void show_sum() {
        cout << getx() + y << "\n";  // Use getx() to access 'x'
    }

    void showy() {
        cout << y << "\n";
    }
};

int main() {
    A obj;
    obj.setx(10);
    obj.sety(20);

    obj.showx();     // Output: 10
    obj.showy();     // Output: 20
    obj.show_sum();  // Output: 30

    return 0;
}

