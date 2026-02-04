#include<iostream>
using namespace std;

class number
{
private:
    int x, y;
    float z;

public:
    number() {
        x = 0;
        y = 0;
        z = 0.0;
    }

    number(float a) {
        x = 0;
        y = 0;
        z = a;
    }

    number(int a, int b) {
        x = a;
        y = b;
        z = 0.0;
    }

    number(int a, int b, float c) {
        x = a;
        y = b;
        z = c;
    }

    void show() {
        cout << x << " " << y << " " << z << endl;
    }
};

int main() {
    number obj1(1, 2);
    number obj2;
    number obj3(3.5f); // Make sure to specify 'f' to avoid ambiguity
    number obj4(1, 2, 2.5f);

    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();

    return 0;
}
