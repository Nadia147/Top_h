#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
   {

    long long int a=0,n=0,p=0;
    cin>>a>>n>>p;
    while(p>0){
     if(n+a<a*n)
        break;
        a+=n;
        p--;}
while(p>0){
        a*=n;
        p--;

    }


     cout<<a<<endl;


    }

}
