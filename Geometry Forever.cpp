#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=abs(a-b);i<abs(a+b);i++){c++;}
    cout<<c-1<<endl;
}
