#include <bits/stdc++.h>
using namespace std;
//int n = 1000000000;
vector<int >v;

bool f(int n)
{ if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(int i=5; i*i<=n; i+=6)
	{
		if(n%i==0 || n%(i+2)==0)
			return false;
	}

	return true;




}
int main()
{    int n,k=0;
 //f(500000);
     cin>>n;
for(int i=2;i<=100000000;i++){
        if(f(i)==true)k++;
    if(n==k){
        cout<<i<<endl;
        break;
    }
}


}


