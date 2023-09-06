#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(n) scanf("%lld",&n)
#define sc2(n,m) scanf("%lld%lld",&n,&m)
#define pf(n,m) printf("%lld",m)
#define pb push_back
#define mp make_pair
#define fr first
#define s second
int a[1000004];
vector<int>v;
int main()
{ll t;
sc(t);
while(t--){
        int l=0,p=1,rem=0;
       int n;
        cin>>n;
        while(n>0){
                if(n%10>0){
                a[l]=((n%10)*p);
                l++;
                }
                n=n/10;
                p=p*10;

        }
        {
        cout<<l<<endl;
        for(int i=0;i<l;i++){
            cout<<a[i]<<" ";
        }
        }


        cout<<endl;
}
}
