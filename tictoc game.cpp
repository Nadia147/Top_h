#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int q=0;
            int r=0;
        cin>>a>>b>>c;
        for(int j=0;j<3;j++){if(a[j]=='X'){q++;}
        else r++;}
         for(int j=0;j<3;j++){if(b[j]=='X'){q++;}
         else r++;}
          for(int j=0;j<3;j++){if(c[j]=='X'){q++;}
          else r++;}
        if(a[0]=='.'&&q>=3){printf("Game #%d: Bob\n",i+1);}
        else if(a[0]=='X'&&q>=3){printf("Game #%d: Alice\n",i+1);}
         else if(a[0]=='.'&&q<3){printf("Game #%d: Alice\n",i+1);}
        }


}
