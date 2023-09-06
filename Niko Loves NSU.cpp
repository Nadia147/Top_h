
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,t,s=0,u=0,a[5];
    string c;
    cin>>t>>c;
    for(int i=0;i<c.size();i++){
        if(c[i]=='N'){n++;}
        else if(c[i]=='S'){s++;}
         else if(c[i]=='U'){u++;}

    }
    a[0]=n;
    a[1]=s;
    a[2]=u;
    sort(a,a+3);
    cout<<a[0]<<endl;

}
