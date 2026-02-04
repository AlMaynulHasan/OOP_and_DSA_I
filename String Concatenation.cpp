#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2 = s2.length();

    char ar[n1+n2+1];
    int i=0;
    while(s1[i]!='\0'){
        ar[i] = s1[i];
        i++;
    }

    int j=0;
    while(s2[j]!='\0'){
        ar[i] = s2[j];
        i++;
        j++;
    }
    ar[i] = '\0';
    cout<<ar;
    return 0;
}

