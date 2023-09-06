
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)
#define pb push_back
#define mp make_pair
#define fr first
#define ss second
int a[1000004];
vector<int>v;
int main()
{ll t;
sc(t);
while(t--){
        int n,k,l=0;
cin>>n>>k;
l=(k-1)/(n-1);
cout<<k+l<<endl;
}
}
