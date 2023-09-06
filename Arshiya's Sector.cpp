#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double r,n,a;
        cin>>r>>n;
        a=(acos(-1)*r*r*n)/360;

        //cout<<a<<" "<<p;
        cout<<std::fixed<<std::setprecision(10)<<a<<"\n";

    }
}

