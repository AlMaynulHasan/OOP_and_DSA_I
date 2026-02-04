#include<iostream>

using namespace std;

class number
{

private:
    int x,y,sum;
public:

    void set(int a,int b);

    void show();
};

void number::set(int a,int b)
{
    x=a;
    y=b;
    sum=a+b;

}

void number::show()
{
    cout<<"first number:"<<x<<"  "<<"secound nuber:"<<y<<endl;

}
void show()
{

    cout<<"Scope resulation"<<endl;
}


int main()
{

    number n1,n2;
    n1.set(1,3);
    n1.show();

    n2.set(10,30);
    n2.show();
    show();

    return 0;
}


