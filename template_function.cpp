#include<iostream>
using namespace std;

template<typename T>T add(T a,T b){
    return a+b;
}

int main(){

    cout<<"integer:"<<add(3,5)<<endl;
    cout<<"double:"<<add(2.5,3.5)<<endl;

    return 0;
}
