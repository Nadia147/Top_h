#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
             //int mm=0;
            int n,s1,s2,e1,e2,t1,t2,a[14444];
            //vector<int>a;
        cin>>n;
        for(int j=0;j<n;j++){
            //mm=0;
            scanf("%d:%d %d:%d",&s1,&e1,&s2,&e2);
             //cout<<"HFHJ";
            t1=(s1*60)+e1;
            t2=(s2*60)+e2;
            if(t1<t2){for(int k=t1;k<=t2;k++){
                a[k]++;}
            }else for(int k=t1;k<=1440;k++) a[k]++;
				for(int k=0;k<t2;k++) a[k]++;}

            sort(a,a+1441);

           //for(int ll=0;ll<=1440;ll++){if(a[ll]<mm)mm=a[ll];}
    		printf("Case #%d: Mr.Xifu needs %d classroom(s)\n", i+1,a[1440]);}
}
