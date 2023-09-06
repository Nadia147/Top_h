#include<bits/stdc++.h>
using namespace std;
 bool pr[10000030];
int f(int n)
{

    memset(pr,true,sizeof(pr));

    for (int i=2;i*i<=n; i++)
    {
        if (pr[i] == true)
        {
            for (int j=i*i; j<=n; j +=i)
                pr[j] = false;
        }
    }
    int ans=0;
    for (int p=2; p<=n; p++)
       {if (pr[p])
          {   ans++;

          }}
          return ans;
}
int main(){

    int t;
    scanf("%d",&t);
    while(t--){
    int n;
        scanf("%d",&n);


    if(n==1)cout<<0<<endl;
    else{

        cout<<f(n-1)<<endl;}
    }
}
