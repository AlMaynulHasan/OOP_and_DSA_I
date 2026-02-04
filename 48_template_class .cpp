#include <iostream>
using namespace std;

template <typename T>
class Number
{
private:
    T x, y;

public:

    // Constructor
    Number(T a, T b)
    {
        x = a;
        y = b;
    }

    // Member function to get maximum
    T getMAX()
    {
        if(x>y)
        {
            return x;
        }
        else
            return y;
    }
};

int main()
{
    // Integer object
    Number<int> ob1(10, 20);
    cout << "Max (int): " << ob1.getMAX() << endl;

    // Float object
    Number<float> ob2(5.6, 3.4);
    cout << "Max (float): " << ob2.getMAX() << endl;

    return 0;
}

