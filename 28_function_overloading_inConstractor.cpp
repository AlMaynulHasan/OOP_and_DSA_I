#include <iostream>
using namespace std;

class MyClass
{
public:

    MyClass(int x)
    {
        cout << "Constructor with int: " << x << endl;
    }


    MyClass(double y)
    {
        cout << "Constructor with double: " << y << endl;
    }


    MyClass(int a, int b)
    {
        cout << "Constructor with two ints: " << a << " and " << b << endl;
    }
};

int main()
{
    MyClass obj1(5);        // Calls constructor with int
    MyClass obj2(3.14);     // Calls constructor with double
    MyClass obj3(10, 20);   // Calls constructor with two ints

    return 0;
}

