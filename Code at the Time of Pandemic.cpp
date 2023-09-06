#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)

int a[1000004];
vector<int>v;
int main()
{
    int t,ch=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
         cout << "Case " << ch << ":" << endl;
        ll tt=1,ne=0;

    for(int i=1;i<=n;i++) {
        cout << "Day = " << i << ", New = " << ne << ", Total = " << tt << endl;
        ne=2*tt;
        tt+=ne;
    }
    ch++;
    }
}
