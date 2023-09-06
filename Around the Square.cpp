
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,ans,a1,a2;
    while(scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e)!=EOF){
        a1=a*a;
        a2=(b*b*acos(-1))/4+(c*c*acos(-1))/4+(d*d*acos(-1))/4+(e*e*acos(-1))/4;
        ans=abs(a1-a2);
        printf("%.3lf\n",ans);
    }
}
