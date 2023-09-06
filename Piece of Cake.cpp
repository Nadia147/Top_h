#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {double a,b,c,e=0,cosx=0,z=0,ans=0;


        cin>>a>>b>>c;
    c=c*(acos(-1)/180);
    //cout<<c<<endl;
    e=sqrt((a*a)+(b*b)-(2*a*b*cos(c)));
    //cout<<e<<endl;
    cosx=((a*a)+(e*e)-(b*b))/(2*a*e);
    //cout<<cosx<<endl;
    z=sqrt((a*a)+(2*e)*(2*e)-(2*a*(2*e)*cosx));
    ans=(a*a)+(z*z);
    printf("%.9lf\n",ans);}
}
