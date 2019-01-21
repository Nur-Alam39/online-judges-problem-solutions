#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int mn1=INT_MAX,mx1=-INT_MAX+1,mn2=INT_MAX,mx2=-INT_MAX+1,mn1i,mx1i,mn2i,mx2i;
    for(int i=2;i<=n;i++)
    {
       if(a[i]>mx1)mx1=a[i],mx1i=i;
       else if(a[i]<mx1)mn1=a[i],mn1i=i;

       if(a[i]<mn2)mn2=a[i],mn2i=i;
       else if(a[i]>mn2)mx2=a[i],mx2i=i;

       printf("%d %d\n%d %d\n",mn1,mx1,mn2,mx2);

       if(a[1]<mx1&&mx1>mn1)return printf("1. a b a\n3\n1 %d %d",mx1i,mn1i),0;
       if(a[1]>mn2&&mn2<mx2)return printf("2. b a b\n3\n1 %d %d",mn2i,mx2i),0;
    }
    return printf("0"),0;
}
