#include <iostream>
using namespace std;

void func (int x)
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

int main()
{
    func(5);          // Calls func(int)
    func(3.14);       // Calls func(double)
    func(10, 20);     // Calls func(int, int)
    return 0;
}

