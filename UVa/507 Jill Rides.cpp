#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=1; i<n; i++)scanf("%d",a+i);
        int sum=0,m=-1,s=0,e=0,si=0,ei=0;
        for(int i=1; i<n; i++)
        {
            sum+=a[i];
            if(sum>m)m=sum,s=si,e=ei;
            if(sum<0)sum=0,s=i;
        }
        if(m>0) printf("The nicest part of route %d is between stops %d and %d\n",c++,s,e);
        else printf("Route %d has no nice parts\n",c++);

    }
    return 0;
}
