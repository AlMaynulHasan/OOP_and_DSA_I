#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A(int a)
    {
        x=a;
        cout<<"A="<<x<<endl;
    }
    ~A()
    {
        cout<<"Destracting A"<<endl;
    }
};
class B:public A
{
private:
    int y;
public:
    B(int a,int b):A(a)
    {
        y=b;
        cout<<"B="<<y<<endl;
    }
    ~B()
    {
        cout<<"Destructing B"<<endl;
    }
};
class C: public B
{
private:
    int z;
public:
    C(int a,int b,int c):B(a,b)
    {
        z=c;
        cout<<"C="<<z<<endl;
    }
    ~C()
    {
        cout<<"Destructing C"<<endl;
    }
};
int main()
{
    C obj(1,2,3);

    return 0;
}

