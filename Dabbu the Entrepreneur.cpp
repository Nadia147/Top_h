#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--){
       double n,a,k=0,l=0;
        cin>>n>>a;
        a=90-a;
        a=(a*(acos(-1)))/180;
        k=n*tan(a);
        l=(n*n)+(k*k);
        l=sqrt(l);
        cout << fixed << setprecision(13)<<l+k<<endl;

    }}

