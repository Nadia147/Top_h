#include<bits/stdc++.h>
using namespace std;
bool f(long double x)
 {if(x < 2)
        return false;
    else if(x == 2)
        return true;
    else{
        long double y = sqrt(x);
        for(int i = 2 ; i <= (int)y ; i++){
            if((int)x % i == 0)
                return false;
        }
        return true;}}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long double n;
        cin>>n;
        long double x;
        n=sqrt(n);
        if(n!=(int)n)cout<<"NO.\n";
        else{
        if(f(n))
        cout<<"YES.\n";
        else cout<<"NO.\n";}
    }
}
