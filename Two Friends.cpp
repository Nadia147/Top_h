#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        if(n<=2){cout<<"Case "<<i+1<<": Tie\n";}
       else if(n%2==0){cout<<"Case "<<i+1<<": CodeMask\n";}
        else cout<<"Case "<<i+1<<": CodeNewtons\n";
    }
}

