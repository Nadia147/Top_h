#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h;

    cin>>t;
    for(int i=0;i<t;i++){
            long long int n,m,d,g=0;
           double ans=0,ans1=0;
        cin>>n>>m>>d;
        g=m;
        double a=0,b=0,y=0;
         int per=0,u=0;
          a=d/2;
        per=d/n;
            u=((d/2)/2)+1;
            b=(u-m)*per;

            y=(u-(g+1))*per;
    ans=(a*a)*acos((a-b)/a)-((a-b)*sqrt(2*a*b-b*b));
     ans1=(a*a)*acos((a-y)/a)-((a-y)*sqrt(2*a*y-y*y));
    printf("%.2lf\n",abs(ans-ans1));



    }
}

