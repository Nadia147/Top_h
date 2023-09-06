#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {int u=0,l=0,d=0,a[10],c=0;

    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))u++;
        if(islower(s[i]))l++;
        if(isdigit(s[i]))d++;

    if(u&&l&&d){c++;
    u=0;
    l=0;
    d=0;}}
    //cout<<"u="<<u<<" l="<<l<<" d="<<d<<" ";
    a[0]=u;
    a[1]=l;
    a[2]=d;
    sort(a,a+3);
    cout<<c<<endl;}
}
