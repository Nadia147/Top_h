#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)
#define pb push_back
int a[1000004];
vector<int>v;
ll pow(ll n,ll m)
{
    ll p=1;
    for(ll i=1; i<=m; i++)
    {
        p*=n;
    }
    return p;
}
int main()
{ll n,m;
double t=0;
sc2(n,m);
for(ll i=1;i<n;i++){
    t+=pow((double)i/n,m);
}
cout<<fixed<<setprecision(12)<<n-t<<endl;
}
