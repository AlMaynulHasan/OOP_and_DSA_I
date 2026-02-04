#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function\n";
    }
};

class Derived1 : virtual public Base {
public:
    void showDerived1() {
        cout << "Derived 1 class function\n";
    }
};

class Derived2 : virtual public Base {
public:
    void showDerived2() {
        cout << "Derived 2 class function\n";
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void showDerived3() {
        cout << "Derived 3 class function\n";
    }
};

int main() {

    Derived3 obj;
    obj.showBase();
    obj.showDerived1();
    obj.showDerived2();
    obj.showDerived3();

    return 0;
}

