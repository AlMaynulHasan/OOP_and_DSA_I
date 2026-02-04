#include<iostream>

using namespace std;

void func(int a=0,int b=0,int c=0,char d='b')
{
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<endl;
}

void func(char a,int b=0)
{
cout<<a<<"  "<<b<<endl;
}

int main()
{

    func(10,20,30);
    func(10,20);
    func();
    func(10,20,30,'a');
    func('a',10);
    func(3);

    return 0;
}

