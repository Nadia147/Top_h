#include<bits/stdc++.h>
using namespace std;
string f(string s,int n){

    string s1,s2;
    s1=s;
    int x=s1.size(),r=0,d=0;
    for(int i=x-1;i>=0;i--){
        int v=(n*(s1[i]-48))+d;
        r=v%10;
        s2+=r+48;
        d=v/10;
    }
    while(d){
        s2+=(d%10)+'0';
        d/=10;
    }
    reverse(s2.begin(),s2.end());

    return s2;

}
int main(){
    int n;
    string a[10001];
    a[0]="1";
    for(int i=1;i<=1000;i++){
            //cout<<"f\n";
        a[i]=f(a[i-1],i);
    }
    cin>>n;
    if(a[n].size()>4){
        for(int i=a[n].size()-4;i<a[n].size();i++){
            cout<<a[n][i];
        }
    cout<<endl;
    }
    else cout<<a[n]<<endl;;






}
