#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double ar,n;
        cin>>ar;
        n=sqrt(ar);
        double a=0,p=0;
        a=(n*n)-((acos(-1)*(n*n))/4);
        p=(acos(-1)*n);
        //printf("%0.12lf %0.12lf\n",a,p);
        //cout<<a<<" "<<p;
        cout<<std::fixed<<std::setprecision(10)<<a<<" ";
    	cout<<std::fixed<<std::setprecision(10)<<p<<endl;
    }
}
