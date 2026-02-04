#include <iostream>
using namespace std;
class Number {
public:
    int x, y;
    Number(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << x << " " << y << endl;
    }
    Number operator+(Number ob);
};

Number Number::operator+(Number ob) {
    Number temp(0, 0);
    temp.x = x + ob.x;
    temp.y = y + ob.y;
    return temp;
}

int main() {
    Number n1(1, 2), n2(4, 3), n3(0, 0);
    n3 = n1 + n2;
    cout << "Result of addition: ";
    n3.show();
    return 0;
}

