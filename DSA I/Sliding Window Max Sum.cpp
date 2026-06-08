#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=INT_MIN;
    int a[6]= {9,18,7,19,22,25};

    for(int i=0; i<6-3+1; i++)
    {
        int s=0;
        for(int j=0; j<3; j++)
        {
            s=s+a[i+j];
        }
        if(s>m)
        {
            m=s;
        }
    }
    cout<<m;
    return 0;
}
