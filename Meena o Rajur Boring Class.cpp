#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int t,n;

    double ans,f[100];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<60;i++){
        f[i]=f[i-1]+f[i-2];
    }
    cin>>t;
    for(int i=0;i<t;i++){
            ans=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        ans+=(f[j]*f[j])-((3.141593*f[j]*f[j])/4);
    printf("%.2lf\n",ans);
    }
}
