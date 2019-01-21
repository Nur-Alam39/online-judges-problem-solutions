#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string a;
     cin>>a;
     int c=0;
     for(int i=0;i<a.size();)
     {
         if(a[i]=='V'&&a[i+1]=='K')
             c++,a[i]='*',a[i+1]='*',i+=2;
         else i++;
     }
     for(int i=0;i<a.size();)
     {
         if(a[i]!='*')
         {
             if((a[i]=='K'&&a[i+1]=='K')||(a[i]=='V'&&a[i+1]=='V'))
             {
                 c++;
                 break;
             }
             else i++;
         }
         else i++;
     }
     printf("%d",c);
     return 0;
 }
