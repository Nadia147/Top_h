#include<iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

#define forn(i, n) for(long long i = 0; i < (long long)n; i++)

#define ll long long
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

ll minimum(ll x,ll y)
{
    return min(x,y);
}
ll maximum(ll x,ll y)
{
    return max(x,y);
}
// Iterative C++ program to compute modular power
#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
ll power(ll x, ll y, ll p)
{
    ll res = 1;     // Initialize result

    x = x % p; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
/*ll n,m;
 vector<vector<ll> >g;
 vector<bool> vis;
 vector<ll>t1,t2,dis,parent,s,val;

void explore(int i,int p,bool &ans)
{
    if(!vis[i])
    {
        vis[i]=true;
        //parent[i]=p;
        //dis[i]=d;
        //t1[i]=t++;
        ll vax=9999999999999999;
        if(s[i]==-1)
        {
            forn(j,g[i].size())
            {if(g[i][j]!=p)
            vax=minimum(s[g[i][j]],vax);
            }
        }
        if(vax<s[p])
            ans=false;
        if(s[i]==-1)
        {   if(vax==9999999999999999)
                {vax=0;
                val[i]=0;
                }
            else
            {val[i]=vax-s[p];
            forn(j,g[i].size())
                {if(g[i][j]!=p)
                    val[g[i][j]]=s[g[i][j]]-vax;
                }

            }
        }
        forn(j,g[i].size())
        {   if(g[i][j]!=p)
            {
                explore(g[i][j],i,ans);

            }


        }
        //t2[i]=t++;
       // cout<<i<<" "<<si[i]<<endl;

    }

}*/
/*void explore2(int i,int p)
{
    if(!vis[i])
    {
        vis[i]=true;
        dp2[i]=si[i];
        ll ans1=0;
        forn(j,g[i].size())
        {
            if(g[i][j]!=p)
            {
                explore2(g[i][j],i);
                ans1+=dp2[g[i][j]];
            }

        }
        dp2[i]+=ans1;
        //cout<<dp2[i]<<" "<<i<<endl;


    }




}
ll ans=-1;
void reroute(int i,int p)
{
    if(!vis[i])
    {vis[i]=true;
    ans=maximum(ans,dp2[i]);
    forn(j,g[i].size())
    {
        if(g[i][j]!=p)
        {
            si[i]-=si[g[i][j]];
            dp2[i]-=dp2[g[i][j]];
            dp2[i]-= si[g[i][j]];

            si[g[i][j]]+=si[i];
            dp2[g[i][j]]+=dp2[i];
            dp2[g[i][j]]+=si[i];

            reroute(g[i][j],i);



            si[g[i][j]]-=si[i];
            dp2[g[i][j]]-=dp2[i];
            dp2[g[i][j]]-=si[i];

            si[i]+=si[g[i][j]];
            dp2[i]+=dp2[g[i][j]];
            dp2[i]+= si[g[i][j]];





        }


    }

    }



}*/
/*ll n;
vector<ll> pre,inc,a;

void fun()
{
    inc[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        ll maxi=-1;
        for(int j=1;j<i;j++)
        {

            if(a[j]<a[i] && inc[j]>maxi)
                maxi=inc[j];
        }
        if(maxi==-1)
            inc[i]=a[i];
        else
            inc[i]=a[i]+maxi;
    }






}


*/

ll p=1000000007;
ll modinv(ll a,ll m)
{


    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        ll q = a / m;
        ll t = m;

        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
       x += m0;

    return x;




}


ll dfs(ll i,vector<vector<ll> > &g,vector<bool> &vis)
{
    if(!vis[i])
    {

        vis[i]=true;
        ll ans=1;



        forn(j,g[i].size())
        {
            if(!vis[g[i][j]])
                ans+=dfs(g[i][j],g,vis);
        }
        return ans;



    }


}
bool cmp1(pair<ll,ll> p1,pair<ll,ll> p2){

           if(p1.first!=p2.first)
            return p1.first<p2.first;
           return p1.second>p2.second;

             }
bool f(string &s,ll len,ll moves,int c1)
{
    ll cnt1=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]-'a'!=c1)
            cnt1++;
    }
    if(cnt1<=moves)
        return true;
    for(int i=len;i<s.length();i++)
    {
        if(s[i-len]-'a'!=c1)
            cnt1--;
        if(s[i]-'a'!=c1)
            cnt1++;
        if(cnt1<=moves)
            return true;

    }
    return false;






}
void prime_fac(ll z,vector<ll> &fac,ll n)
{
        ll cnt=0;
        ll p=1;
        while(z%2==0)
        {
            z/=2;
            cnt++;
            p*=2;
            fac.push_back(p);
        }
        if(cnt>0 && p*2<=n)
            fac.push_back(p*2);




        ll x=(ll)sqrt(z);
        for(int i=3;i<=x;i+=2)
        {
            ll cnt=0;
            ll p=1;
            while(z%i==0)
            {
                cnt++;
                z/=i;
                p*=i;
                fac.push_back(p);
            }
            if(cnt>0 && p*i<=n)
                fac.push_back(p*i);




        }

        if(z>2)
        {
            fac.push_back(z);
            if(z*z<=n)
            fac.push_back(z*z);

        }

}
bool prime(ll l)
{
    for(int i=2;i<=sqrt(l);i++)
    {
        if(l%i==0)
            return false;
    }
    return true;



}
ll cubic_root(ll x)
{
    ll l = 0, r = 1000005;
    while (l != r) {
        ll m = (l + r + 1) / 2;
        if (m * m * m > x)
            r = m - 1;
        else
            l = m;
    }
    return l;
}
ll sp(ll l,ll h,vector<ll> &pre,ll k)
{ //  cout<<l<<" "<<h<<endl;
    if(l==h)
        return 0;
    //cout<<l<<" "<<h<<endl;
    ll mid=l+(h-l)/2;
    ll ans=0;
    ans+=sp(l,mid,pre,k);
    ans+=sp(mid+1,h,pre,k);

    for(int i=mid+1;i<=h;i++)
    ans+=(pre.begin()+mid+1)-(upper_bound(pre.begin()+l,pre.begin()+mid+1,pre[i]-k));

    //cout<<ans<<endl;
    vector<ll> temp(h-l+1,0);
    ll x=0;
    int i=l;
    int j=mid+1;
    while(i<=mid && j<=h)
    {
        if(pre[i]<pre[j])
            temp[x++]=pre[i++];
        else
            temp[x++]=pre[j++];

    }
    //cout<<"yes1"<<endl;
    while(i<=mid)
        temp[x++]=pre[i++];
    while(j<=h)
        temp[x++]=pre[j++];
    //cout<<"yes"<<endl;
    x=0;
    i=l;
    while(i<=h)
        pre[i++]=temp[x++];

    return ans;

}
void sieve(vector<bool> &prime,ll n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    //cout<<"yes"<<endl;


    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }

    }

    // Print all prime numbers
   /* ll cnt1=0;
    for (int p=2; p<=n; p++)
       {
           //cout<<"yes1"<<endl;
           if (prime[p])
          {cout << p << " ";
          cnt1++;
          }
       }
    cout<<cnt1<<endl;*/
}

void sieve_prime(vector<ll> &spf)
{
    spf[1] = 1;
    ll MAXN=spf.size();
    for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
void gen_fac(int x,vector<pair<ll,ll> > &cnt,vector<ll> &spf)
{
    //ll cnt=0;
    //vector<ll> ret;
    while (x != 1)
    {
        if(cnt.size()==0 || cnt[cnt.size()-1].first!=spf[x])
        cnt.push_back({spf[x],1});
        else
        cnt[cnt.size()-1].second++;

        //cnt++;
        x = x / spf[x];

    }
    return ;


}

struct CustomCompare
{


    bool operator()(pair<ll,pair<ll,ll> > p1, pair<ll,pair<ll,ll> > p2)
    {
        if(p1.first!=p2.first)
            return p1.first<p2.first;
        else
            return p1.second.first>p2.second.first;
    }
};

int main()
{   ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll MAX=	9223372036854775807 ;
    ll p= 998244353;

    int t=1;
    cin>>t;




   while(t--)
    {
       ll n;
       cin>>n;

       set<pair<ll,pair<ll,ll> >,CustomCompare > s;
       s.insert({n,{0,n-1}});

       vector<ll> a(n);
       int i=1;
       while(!s.empty() && i<=n)
       {
           pair<ll,pair<ll,ll> >p=*s.rbegin();
           s.erase(*s.rbegin());

           ll mid=(p.second.first+p.second.second)/2;
           a[mid]=i;
           i++;
           if(mid-1>=p.second.first)
           {
               s.insert({mid-p.second.first,{p.second.first,mid-1}});
           }
           if(mid+1<=p.second.second)
           {
               s.insert({p.second.second-mid,{mid+1,p.second.second}});
           }






       }
       forn(i,n)
       cout<<a[i]<<" ";
       cout<<endl;















    }

}
