
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,k,c;
    cin>>t;
    for(int i=0;i<t;i++){
            k=0;
            c=0;
            int p=0;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {if(s[j]!='W'&&s[j]!='N'&&s[j]!='D'){
            c++;

        }}
        p=c/6;
       k=c%6;
       if(c<6&&c!=1)cout<<c<<" BALLS\n";
       else if(c==1)cout<<c<<" BALL\n";

       else if(c>6&&p>1&&k>1)
           cout<<p<<" OVERS "<<k<<" BALLS"<<endl;
           else if(c>6&&p>1&&k==1) cout<<p<<" OVERS "<<k<<" BALL"<<endl;
           else if(c>6&&p==1&&k==1) cout<<p<<" OVER "<<k<<" BALL"<<endl;
           else if(c>6&&p==1&&k>1) cout<<p<<" OVER "<<k<<" BALLS"<<endl;


           else if(k==0&&p>1)cout<<p<<" OVERS\n";
           else if(k==0&&p==1)cout<<p<<" OVER\n";



}}
