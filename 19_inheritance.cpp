#include<iostream>
using namespace std;

//Inheritance allows a class (derived/child) to inherit attributes and methods from another class (base/parent).

class base
{
    int x;
public:
    base(int n)
    {
        x=n;
    }
    void show()
    {
        cout<<x<<endl;
    }
};
class derived : public base
{
    int y;
public:
    derived(int n,int m):base(m)
    {
        y=n;
    }
    void show()
    {
        base::show();
        cout<<y<<endl;
    }
};
int main()
{
    derived ob1(10,20);
    ob1.show();

    return 0;

}

