#include<bits/stdc++.h>
using namespace std;

int main(){
string s1, s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2 = s2.length();

    for(int i=0;i<n1-n2+1;i++){
        int c=0;
        for(int j=0;j<n2;j++){
            if(s1[i+j]==s2[j]){
                c++;
            }
        }
        if(c==n2){
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}

