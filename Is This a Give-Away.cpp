#include<bits/stdc++.h>
using namespace std;
int a[100000]={-1};
int main()
{
    int c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'&&s[i+1]=='}'){c++;}
    }
    cout<<c<<endl;
}
