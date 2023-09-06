#include<bits/stdc++.h>
using namespace std;
string bigint(string str1, string str2)
{if(str1.size()<str2.size())
    {
        swap(str1,str2);
    }

    int j = str1.size()-1;
    for(int i=str2.size()-1;i>=0;i--,j--)
    {
        str1[j]+=(str2[i]-'0');
    }

    for(int i=str1.size()-1;i>0;i--)
    {
        if(str1[i]>'9')
        {
            int d=str1[i]-'0';
            str1[i-1]=((str1[i-1]-'0') + d/10)+'0';
            str1[i]=(d%10)+'0';
        }
    }
    if(str1[0]>'9')
    {
        string k;
        k+=str1[0];
        str1[0]=((str1[0]-'0')%10)+'0';
        k[0]=((k[0]-'0')/10)+'0';
        str1=k+str1;
    }
    return str1;
}

  int main()
{
    string a,b,c;
    string a1,b1;
    cin>>a>>b;
    /*for(int i=0;i<len(a);i++){
        a1.push_back(a[i]+'0');
    }

    cout<<a1<<endl;*/
    cout<<bigint(a,b)<<endl;
}//-(-1 - sqrt(5))/2.0;
