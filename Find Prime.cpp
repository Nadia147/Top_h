#include<bits/stdc++.h>
using namespace std;
vector<int>v;
bool f(int x){
    for(int i= 2;i*i<=x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,l,m;
        cin>>n;
        l=n+1;
        m=n-1;

    while(!f(l)){l++;}
    while(!f(m)){m--;}
        cout<<m<<" "<<l<<endl;


    }
}
