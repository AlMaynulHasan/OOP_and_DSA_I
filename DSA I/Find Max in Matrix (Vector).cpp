#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v;
    int k;
    int a[3][3];/
    for(int r=0; r<3; r++)
    {
        vector<int>v1;
        for(int c=0; c<3; c++)
        {
            cin>>k;
           v1.push_back(k);
        }
        v.push_back(v1);
    }

    int m=-1;

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            if(v[r][c]>m){
                m=v[r][c];
            }
        }
    }
    cout<<m;

    return 0;
}
