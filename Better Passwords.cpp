#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t=0,p=0;

        cin>>a;
       a[0]=toupper(a[0]);
       t=a.size();
       for(int i=0;i<a.size();i++){
        if(a[i]=='s')a[i]='$';
        else if(a[i]=='i')a[i]='!';
         else if(a[i] == 'o') {
            t++;
            for(int j = t; j > i + 1; j--) {
                a[j] = a[j - 1];
            }
            a[i] = '(';
            a[i+1] = ')';
            i=i-1;
        }
        else {
            continue;
        }
    }



       cout<<a<<"."<<endl;
}

