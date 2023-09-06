#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001],b;
    while(scanf("%s", a) != EOF)
    {int sum=0,t=0;
    //cin>>a;
    for(int i=strlen(a)-1;i>=0;i--){
            t=a[i]-'0';
            sum+=t;

    }
    cout<<sum<<endl;}
}
