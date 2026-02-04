#include<iostream>
using namespace std;

template<typename T>T add(T a,T b){
    return a+b;
}

int main(){

    cout<<"Addition of integers:"<<add(3,5)<<endl;
    cout<<"Addition of doubles:"<<add(2.5,3.5)<<endl;

    return 0;
}

