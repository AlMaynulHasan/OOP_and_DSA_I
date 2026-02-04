#include<iostream>
using namespace std;

class base
{
    int x;

public:
    base()
    {
        x=0;
    }
    base(int n)
    {
        x=n;
    }
    void setx(int n)
    {
        x=n;
    }
    void show()
    {
        cout<<x<<endl;
    }
};

class derived:public base
{

    int y;
public:
    derived():base()
    {
        y=0;
    }
    derived(int n,int m):base(m)
    {
        y=n;
    }

    void sety(int n,int m)
    {
        base::setx(m);
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
    derived ob2;
    ob2.sety(30,40);
    ob2.show();

    return 0;

}

