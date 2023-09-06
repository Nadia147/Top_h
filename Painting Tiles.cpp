#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        if(n%7<2){cout<<"Case "<<i+1<<": Oh no, my eggs! :(\n";}
        else cout<<"Case "<<i+1<<": No eggs for you! :D\n";
    }
}
