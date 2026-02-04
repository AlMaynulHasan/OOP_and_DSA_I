#include<iostream>
using namespace std;

class A
{
    int a;
public:
    void f()
    {
        a = 10;
        cout << "Value of a in class A: " << a << endl;
    }
};

// Abstract class B
class B
{
public:
    virtual void f() = 0; // Pure virtual function
};

// Derived class C that implements the pure virtual function
class C : public B
{
public:
    void f() override
    {
        cout << "Function f() implemented in class C (derived from abstract class B)" << endl;
    }
};

int main()
{
    A objA;
    objA.f();

    C objC;
    objC.f();

    return 0;
}

