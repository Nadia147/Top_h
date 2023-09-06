#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

         if(a>b&&a>c)cout<<"Case "<<i+1<<": A\n";
        else if(b>a&&b>c)cout<<"Case "<<i+1<<": B\n";
        else if(c>a&&c>b)cout<<"Case "<<i+1<<": C\n";
        else cout<<"Case "<<i+1<<": Confused\n";

    }
}

