#include <iostream>
using namespace std;

class truck;

class car
{
    int speed;
    int passangers;

public:
    car(int s,int p)
    {
        speed = s;
        passangers = p;
    }
    friend int speed_compare(car c, truck t);
};
class truck
{
    int speed;
    int passangers;
public:
    truck(int s,int p)
    {
        speed = s;
        passangers = p;
    }
    friend int speed_compare(car c, truck t);
};

int speed_compare(car c, truck t)
{
    return c.speed - t.speed;
}

int main()
{
    car c(90,6);
    truck t(100,3);

    int sp = speed_compare(c, t);

    if (sp > 0)
    {
        cout << "Car is faster." << endl;
    }
    else if (sp < 0)
    {
        cout << "truck is faster." << endl;
    }
    else if (sp == 0)
    {
        cout << "Car speed = truck speed." << endl;
    }
    else
    {
        cout << "Car and truck are not running." << endl;
    }

    return 0;
}


