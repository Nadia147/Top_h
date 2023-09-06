#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld\n",m)
#define pb push_back
#define mp make_pair
#define fr first
#define se second
int a[1000004];
string s[1000008];
vector<string>v;
int main()
{int t,m;
cin>>t;
for(int i=0;i<t;i++){
        cin>>s[i];

}
cin>>m;
sort(s,s+t);
v.pb(s[0]);
for(int i=1;i<t;i++){
    if(s[i]!=s[i-1])
    v.pb(s[i]);


}
for(int i=0;i<v.size()&&i<m;i++){cout<<v[i];}
cout<<endl;

}
