#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    cin>>t;
    while(t--){
      long long  int n;
       cin>>n;
      long long  int x[n+1],y[n+1],m=0,g=0;
       for(long long int i=0;i<n;i++){cin>>x[i]>>y[i];}
       for(long long int i=0;i<n;i++){
            for(long long int j=i+1;j<n;j++){
               g=((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j]));
              m=max(g,m);
            }

       }
        printf("Case %d: %lld\n",cs++,m);
}}


