#include<bits/stdc++.h>
using namespace std;
int main()
{int t,k,m;
int n,v;
cin>>t;
while(t--){

    cin>>n;
    if(n==1)cout<<5<<endl;
    else{
        if(n>10){n=n%10;}
        k=n-1;
        m=10-k;
        cout<<k<<m<<endl;
    }}

}

