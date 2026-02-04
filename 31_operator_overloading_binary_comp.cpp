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
        cout << x <<"  "<< y << endl;
    }

    Number operator>(Number ob);
};

Number Number::operator>(Number ob)
{
    if (x > ob.x && y > ob.y)
    {
        return Number(1, 1);
    }
    else
    {
        return Number(0, 0);
    }
}

int main()
{
    Number n1(1, 2), n2(4, 3), result(0, 0);

    result = n2 > n1;

    if (result.x == 1 && result.y == 1)
    {
        cout << "n2 is greater" << endl;
    }
    else
    {
        cout << "n1 is greater" << endl;
    }

    return 0;
}

