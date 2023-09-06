#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,t,o;
    o=30*((acos(-1))/180);
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d;
        a=(d/2)*cos(o);
        b=a*6*d;
        printf("%.5lf\n",b);

    }

}
