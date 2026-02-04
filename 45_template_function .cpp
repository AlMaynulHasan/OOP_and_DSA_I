#include<iostream>
using namespace std;

template<class T> void Swap(T &a,T &b)
{

    T temp;

    temp=a;
    a=b;
    b=temp;
}

int main()
{

    int i=30,j=20;
    float x=40.5,y=50.55;

    cout<<"before swap:"<<"i="<<i<<" "<<"j="<<j<<endl;
    Swap(i,j);
    cout<<"\nafter swap:"<<"i="<<i<<" "<<"j="<<j<<endl;

    cout<<"\nbefore swap:"<<"x="<<x<<" "<<"y="<<y<<endl;
    Swap(x,y);
    cout<<"\nafter swap:"<<"x="<<x<<" "<<"y="<<y<<endl;

    return 0;
}
