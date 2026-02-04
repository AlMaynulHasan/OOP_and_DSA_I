
#include<iostream>
using namespace std;

class base
{
    int y;

public:
    base()
    {
        y=0;
    }
    base(int n)
    {
        y=n;
    }
    void sety(int n)
    {
        y=n;
    }
    void show()
    {
        cout<<y<<endl;
    }
};

class base2
{

    int z;

public:
    base2()
    {
        z=0;
    }
    base2(int n)
    {
        z=n;
    }
    void setz(int n)
    {
        z=n;
    }
    void show()
    {
        cout<<z<<endl;
    }
};

class derived:public base,public base2
{
    int x;
public:
    derived():base(),base2()
    {
        x=0;
    }
    derived(int n,int m,int p):base(m),base2(p)
    {
        x=n;
    }

    void setx(int n,int m,int p)
    {
        base::sety(m);
        base2::setz(p);
        x=n;
    }
    void show()
    {
        cout<<x<<endl;
        base::show();
        base2::show();
    }
};

int main()
{

    derived ob1;
    ob1.setx(50,60,70);
    ob1.show();
    cout<<"\nDerive obj2"<<endl;
    derived ob2(10,20,30);
    ob2.show();

    return 0;

}

