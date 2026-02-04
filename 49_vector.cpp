#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int>v;
    int i;

    cout<<"size:"<<v.size()<<endl;

    for(i=0; i<10; i++)
    {
        v.push_back(i);
    }
    cout<<"size:"<<v.size()<<endl;

    for(i=0;i<v.size();i++){cout<<v[i]<<" ";}

    return 0;

}

