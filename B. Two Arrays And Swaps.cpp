#include<bits/stdc++.h>
using namespace std;

int a[1000004],b[1000004];
vector<int>v;
int main()
{int t;
cin>>t;
while(t--){
    int n,k,sum=0,s1=0,s2=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        s2+=b[i];
    }

    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        if(i<k){
            sum+=max(a[i],b[i]);
        }
        else{
            sum+=a[i];
        }}


    cout<<sum<<endl;}

}
