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

    for(i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\n\nusing vector iterator"<<endl;

    vector<int>::iterator p=v.begin();
    while(p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }

    return 0;

}

