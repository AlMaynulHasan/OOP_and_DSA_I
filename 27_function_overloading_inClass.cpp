#include <iostream>
using namespace std;

class MyClass
{
public:

    void func(int x)
    {
        cout << "Printing int: " << x << endl;
    }


    void func(double y)
    {
        cout << "Printing double: " << y << endl;
    }


    void func(int a, int b)
    {
        cout << "Printing two ints: " << a << " and " << b << endl;
    }
};

int main()
{
    MyClass obj;

    obj.func(5);         // Calls func(int)
    obj.func(3.14);      // Calls func(double)
    obj.func(10, 20);    // Calls func(int, int)

    return 0;
}

