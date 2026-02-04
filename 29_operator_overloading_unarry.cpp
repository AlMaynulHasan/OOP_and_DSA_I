#include <iostream>
using namespace std;

class Number
{
public:
    int x, y;

    Number(int a, int b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << x << " " << y << endl;
    }

    Number operator -()
    {
        return Number(-x, -y);
    }
};

int main()
{
    Number n1(3, -5);
    Number n2 = -n1;

    cout << "Original object: ";
    n1.show();

    cout << "After unary minus: ";
    n2.show();

    return 0;
}

