#include <iostream>
using namespace std;

class bike;

class car
{
    int speed;
public:
    car(int s)
    {
        speed = s;
    }
    friend int speed_compare(car c, bike b);
};
class bike
{
    int speed;
public:
    bike(int s)
    {
        speed = s;
    }
    friend int speed_compare(car c, bike b);
};

int speed_compare(car c, bike b)
{
    return c.speed - b.speed;
}

int main()
{
    car c(90);
    bike b(100);

    int sp = speed_compare(c, b);

    if (sp > 0)
    {
        cout << "Car is faster." << endl;
    }
    else if (sp < 0)
    {
        cout << "Bike is faster." << endl;
    }
    else if (sp == 0)
    {
        cout << "Car speed = Bike speed." << endl;
    }
    else
    {
        cout << "Car and Bike are not running." << endl;
    }

    return 0;
}


