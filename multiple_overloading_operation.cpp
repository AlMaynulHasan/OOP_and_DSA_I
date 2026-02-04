#include <iostream>
using namespace std;

class number {
private:
    int x, y;

public:
    number() { x = 0; y = 0; }// must need default constractor

    number(int a, int b) { x = a; y = b; }

    void show() { cout << "X=" << x << "  Y=" << y << endl; }

    number operator+(number ob); // addition
    number operator-(number ob); // subtraction
    number operator*(number ob); // multiplication
};

// ✅ Member function definitions
number number::operator+(number ob) {
    number temp;
    temp.x = x + ob.x;
    temp.y = y + ob.y;
    return temp;
}

number number::operator-(number ob) {
    number temp;
    temp.x = x - ob.x;
    temp.y = y - ob.y;
    return temp;
}

number number::operator*(number ob) {
    number temp;
    temp.x = x * ob.x;
    temp.y = y * ob.y;
    return temp;
}

int main() {
    number n1(10, 5), n2(2, 3);

    number n3 = n1 + n2;
    cout << "Addition: ";
    n3.show();

    number n4 = n1 - n2;
    cout << "Subtraction: ";
    n4.show();

    number n5 = n1 * n2;
    cout << "Multiplication: ";
    n5.show();

    return 0;
}

