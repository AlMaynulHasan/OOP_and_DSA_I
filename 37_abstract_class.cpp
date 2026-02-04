#include <iostream>
#include <cstdlib>
using namespace std;

class base {
public:
    int j;
    base(int x) { j = x; }
    virtual void func() {
        cout << "Base: " << j << endl;
    }
};

class derived1 : public base {
public:
    derived1(int x) : base(x) { }
    void func() {
        cout << "derived1: " << j*j << endl;
    }
};

class derived2 : public base {
public:
    derived2(int x) : base(x) { }
    void func() {
        cout << "derived2: " << j+j << endl;
    }
};

int main() {
    base *p;
    derived1 d1(10);
    derived2 d2(20);
    int i, j;

    for (i = 0; i < 10; i++) {
        j = rand();
        if (j % 2)
            p = &d1;
        else
            p = &d2;

        p->func(); // common access point
    }

    return 0;
}

