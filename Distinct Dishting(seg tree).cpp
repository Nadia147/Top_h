#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100005],t[2000005],n,b[1000005];
//set<int>t;
void build(ll a[],ll v, ll tl, ll tr) {
    if (tl == tr) {

        t[v] = a[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);

        {if(t[2*v]==t[2*v+1])
         t[v]=t[2*v];
         else
        t[v]=t[2*v]+t[2*v+1];

    }
}}
ll qr(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return t[node];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=qr(left,b,mid,i,j);
    ll p2=qr(right,mid+1,e,i,j);

   if(p1==p2)
    return p1;
   else return p1+p2;


}
void update(ll at,ll L,ll R,ll id,ll val)
{
    if(R<id||L>id)return;
    if(L==R&&id==R)
    {
        t[at]=val;
        b[id]=val;
        return;
    }
    ll mid=(L+R)/2;
    update(2*at,L,mid,id,val);
    update(2*at+1,mid+1,R,id,val);

    {if(t[2*at]==t[2*at+1])
         t[at]=t[2*at];
         else
        t[at]=t[2*at]+t[2*at+1];

    }
}
int main(){
    ll n,q,s,ss,sss,ssg,sst;
    scanf("%lld%lld",&n,&q);
    for(int i=1;i<=n;i++){
        scanf("%lld",&b[i]);


    }
    //sort(b,b+n);
     for(int i=1;i<=n;i++){
        if(b[i]%3==0&&b[i]!=b[i+1]){
            a[i]=b[i];
        }
     }
    build(a,1,1,n);
    for(int i=0;i<q;i++){
        scanf("%lld",&s);
        if(s==1){
            scanf("%lld%lld",&ss,&sss);
            ll num=qr(1,1,n,ss,sss);
            printf("%lld\n",num);
        }
        if(s==0){
            scanf("%lld%lld",&ssg,&sst);
            update(1,1,n,ssg,sst);
        }
    }
}
