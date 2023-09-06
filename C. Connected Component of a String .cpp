#include<bits/stdc++.h>
using namespace std;
int main()
{int t=0;
double n,v;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]!=s[i+1]){
        t++;
    }
}
cout<<t<<endl;

}

