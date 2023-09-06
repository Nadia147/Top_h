#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t,h;
    double a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        b=((a*4)*(a*2))-(2*3.1416*a*a);
        printf("Case %d: %.2lf\n",i+1,b);

    }
}


