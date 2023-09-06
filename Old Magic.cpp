#include<bits/stdc++.h>
using namespace std;
string s[100000];
    int a[1000000];
int main()
{
   long long int n,t;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s[i]>>a[i];

    }
    cin>>n;
    for(int i=t-1;i>=0;i--){
        if(s[i]=="add"){n=n-a[i];}
        else if(s[i]=="subtract"){n=n+a[i];}
        else if(s[i]=="multiply"){n=n/a[i];}
        else if(s[i]=="divide"){n=n*a[i];}
    }
    cout<<n<<endl;
}
