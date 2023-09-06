#include<bits/stdc++.h>
using namespace std;
int a[1000004];
int main()
{
    int n,sum=0,sum1=0;
    int i,j;
    cin>>n;
    for(int i=0;i<n*n;i++){
        cin>>a[i];
    }
  //  a[0]=INT_MAX;
    sort(a,a+n*n);

    //cout<<endl;
    if(n%2!=0)
    {for(int i=(n*n)-n;i<=(n*n)-1;i++){
            sum+=a[i];

    }
    //cout<<"s1"<<sum<<endl;
    for(int i=0;i<n-1;i++){
        sum1+=a[i];
    }
    sum1=sum1+a[(n*n)-n];}

    else{
        for(i=0, j=n*n-1; i<n; i++,j--)
        {
            sum+=a[i];
            sum1+=a[j];
        }


    }

    cout<<abs(sum-sum1)<<endl;

}
