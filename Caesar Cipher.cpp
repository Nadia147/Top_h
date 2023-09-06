#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    char d;
    int t;
    cin>>t;
    d=getchar();
   getline(cin,a);

         for(int i=0;i<a.size();i++){


            {if(((int)a[i]>=65&&(int)a[i]<=90)||((int)a[i]>=97&&(int)a[i]<=122))
                if(a[i]-t<97){
                    a[i]=123-(97-(a[i]-t));
                }
                else a[i]=a[i]-t;
            }

       }

        cout<<a<<endl;



}



