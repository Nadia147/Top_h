#include<bits/stdc++.h>
using namespace std;
int f(int a,int b){
    if(a%b==0)return b;
    else return f(b,a%b);
}
int main()
{
    int h=0,y=0,n;
    cin>>n;
    for(int i=1;i<=n;i++){
            y=f(i,n);
            if(y==1){
                h++;
            }}
            cout<<h<<endl;
}
