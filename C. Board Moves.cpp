#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)
#define pb push_back
#define mp make_pair

int a[1000004];
vector<int>v;
int main()
{int t;
cin>>t;
while(t--){
        ll n,ans=0;
        sc(n);
        for(ll i=1;i<=n/2;i++){ans+=(i*i);}
        //cout<<ans<<endl;
        ans=ans*8;
        cout<<ans<<endl;

}
}
