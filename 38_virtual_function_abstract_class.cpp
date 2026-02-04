#include <iostream>
using namespace std;

// Abstract Base Class using Pure Virtual Function
class base {
public:
    int i;
    base(int x) { i = x; }

    virtual void func() = 0; // Pure virtual function
};

// Derived class 1
class derived1 : public base {
public:
    derived1(int x) : base(x) {}
    void func() override {
        cout << "derived1 = " << i * i << endl;
    }
};

// Derived class 2
class derived2 : public base {
public:
    derived2(int x) : base(x) {}
    void func() override {
        cout << "derived2 = " << i * i << endl;
    }
};

int main() {
    derived2 obj(10);
    obj.func();  // Output: derived2 = 100
    return 0;
}

