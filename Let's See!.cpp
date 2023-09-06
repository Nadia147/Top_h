#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int l,r,ans=0,k=1;
        cin>>l>>r;
        for(int j=0;j<=64;j++){
            if(k>r)break;
            if(k>=l)ans+=k;
            k*=2;
        }cout<<ans<<endl;

    }
}
