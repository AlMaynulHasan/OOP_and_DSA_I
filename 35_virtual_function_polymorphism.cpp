#include <iostream>
using namespace std;

// বেস ক্লাস
class Shape
{
public:
    // ভার্চুয়াল ফাংশন
    virtual void area()
    {
        cout << "Area of the shape." << endl;
    }
};
// ডেরাইভড ক্লাস ১
class Rectangle : public Shape
{
public:
    int length, width;

    Rectangle(int l, int w) : length(l), width(w) {}

    // ভার্চুয়াল ফাংশন ওভাররাইড
    void area() override
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// ডেরাইভড ক্লাস ২
class Circle : public Shape
{
public:
    int radius;

    Circle(int r) : radius(r) {}

    // ভার্চুয়াল ফাংশন ওভাররাইড
    void area() override
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape* shapePtr;

    Rectangle rect(5, 3);
    Circle circ(4);

    // Rectangle অবজেক্টের দিকে পয়েন্ট করা
    shapePtr = &rect;
    shapePtr->area();  // আউটপুট: Area of Rectangle: 15

    // Circle অবজেক্টের দিকে পয়েন্ট করা
    shapePtr = &circ;
    shapePtr->area();  // আউটপুট: Area of Circle: 50.24

    return 0;
}

