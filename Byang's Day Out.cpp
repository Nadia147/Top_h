#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,c,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a+b>=c&&a+c>=b&&c+b>=a)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
