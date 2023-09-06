#include<bits/stdc++.h>
using namespace std;
 vector<int>v;
int main()
{
    int t,a,c,b;
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>a;
            v.push_back(a);

    }
    {sort(v.begin(),v.end());}
    cout<<v[t-1]<<endl;
}

