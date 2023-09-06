#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
         cin>>n;
            double a[n],sum=0.0;

       for(int j=0;j<n;j++){
        cin>>a[j];
        sum+=a[j];
       }
       printf("Case %d: %.3lf\n",i+1,sum/n);
    }
}
