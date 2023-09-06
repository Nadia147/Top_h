#include<bits/stdc++.h>
using namespace std;
vector<int>v1;
int f(int x)
{     //cout<<"x"<<x<<endl;
int f=0;
        for(int i=1;i*i<=x;i++){
        if(x%i==0)
        {if(x/i==i)
        {v1.push_back(i);
        f++;}
         else
         {v1.push_back(x/i);
         f++;
         v1.push_back(i);
         f++;}

    }}
   //cout<<"v"<<f<<endl;
    return  f;
    v1.clear();

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r,k,j=0,a[1000];
        cin>>l>>r>>k;

        for(int i=l;i<=r;i++){
        if(f(i)==k)
            a[j]=1;
            cout<<"f="<<f(i)<<endl;
            j++;

        }
       // for(int i=0;i<=j;i++){cout<<a[i]<<"   ";}
    }
}
