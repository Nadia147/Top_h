#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)
#define pb push_back

int a[1000004],b[1000006];
vector<int>v;
int main()
{int n,l=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
    b[i]=1;
        if(a[i]>a[i-1])
        b[i]=b[i-1]+1;}

for(int i=1;i<=n;i++){

 l=max(l,min(b[i]+1,n));

if(a[i-b[i]+1]>a[i-b[i]-1]+1)
    {l=max(l,b[i]+b[i-b[i]]);}
if(a[i-b[i]+2]>a[i-b[i]]+1)
{l=max(l,b[i]+b[i-b[i]]);}
 }
cout<<l<<endl;

}

