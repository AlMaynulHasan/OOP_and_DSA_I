#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int a[3][3];
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            cin>>k;
            a[r][c]=k;
        }
    }

    int m=-1;

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            if(a[r][c]>m){
                m=a[r][c];
            }
        }
    }
    cout<<m;

    return 0;
}
