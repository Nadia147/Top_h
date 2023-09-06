#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,h;
    long long int a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        b=((a*(a-1)*(a-2)*(a-3))/24);
        cout<<"Case "<<i+1<<": "<<b<<endl;

    }
}

