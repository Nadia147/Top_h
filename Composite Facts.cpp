#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;

ll a[100005],t[400005],bb[400005],fct[100000];
//set<int>t;
void fac()
{
    fct[0]=1;
    for(ll i=1;i<1000005;i++)
        fct[i]=((fct[i-1]%mod)*i)%mod;
}

ll sum(ll x)
{

    ll lo = fct[x]+1;
    ll l= (lo*(lo+1))/2;
    ll hi = lo+x-1;
    ll h= (hi*(hi+1))/2;
    ll rs= (h-l)%mod;
    return rs;

}
void build(ll node,ll b,ll e){
    if(b==e)
        {

            t[node]=a[b]%mod;
            return;
        }
        ll left = node*2;
        ll right = node*2+1;
        ll mid=(b+e)/2;
        build(left,b,mid);
        build(right,mid+1,e);

       t[node]=(t[left]%mod+t[right]%mod)%mod;;
}
ll qr(ll node,ll b,ll e,ll i,ll j)
{
    if(e<i || b>j)
        return 0;
    if(b>=i && e<=j)
    {
        return t[node]%mod;
    }
    ll left = node*2;
    ll right = node*2+1;
     ll mid=(b+e)/2;
   ll q1=qr(left,b,mid,i,j)%mod;
     ll q2=qr(right,mid+1,e,i,j)%mod;
     return (q1%mod+q2%mod)%mod;
}
 void update(ll at,ll l,ll r,ll n,ll v){
     if(l==n||r==n){return;}
    if(l==r&&n==r) {
         t[at]=sum(v)%mod;
            return;
     }
     ll m=(l+r)/2;
     update(2*at,l,m,n,v);
       update(2*at+1,m+1,r,n,v);
              t[at]=(t[2*at]%mod+t[2*at+1]%mod)%mod;;
 }
int main(){
    ll t,n,q,op,ans=0;
    ll diff,max1,min1;
   scanf("%lld%lld",&n,&q);
   for(int i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    a[i]=sum(a[i]);
   }
   build(1,1,n);
   while(q--){
        scanf("%lld",&op);
   if(op==1){
        ll x,v;
    scanf("%lld%lld",&x,&v);
    update(x,1,n,1,v);
   }
   else{
    ll l,h;
     scanf("%lld%lld",&l,&h);
            ans=qr(1,1,n,l,h);
            printf("%lld\n",ans);
   }

   }

    return 0;
}
