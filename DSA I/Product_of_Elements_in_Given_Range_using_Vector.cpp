#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin>>sz;
    int k,start,en;

    vector<int>a;

    for(int i=0; i<sz; i++)
    {
        cin>>k;
        a.push_back(k);
    }

    cin>>start;
    cin>>en;
    int m=1;
    for(int i=start; i<en+1; i++)
    {
        m=m*a[i];
    }
    cout<<m;

    return 0;
}
