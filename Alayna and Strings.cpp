#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int t=0,c=0;

       cin>>a;
       for(int i=0;i<a.size();i++){
        if((int)a[i]>=65&&(int)a[i]<=90){
            t++;
        }
        if((int)a[i]>=97&&(int)a[i]<=122){
            c++;
        }
       }
        cout<<t<<" "<<c<<endl;



}



