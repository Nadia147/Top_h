#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double r,k=3.141592653589,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>r;
            c=((r-2)*180)/r;
        printf("%.6lf\n",c);
    }
}

