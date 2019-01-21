#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)scanf("%d%d",a+i,b+i);
    int s=1,k=1;
    if(a[0]!=b[0])
    {
        printf("rated\n");
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            printf("rated\n");
            return 0;
        }
        if(a[i]<=a[i-1]&&b[i]<=b[i-1])
        {
            if(k==1)
                s=1;
        }
        else
        {
            if(k==1)
                s=0,k=0;
        }
    }
    if(s==1)
        printf("maybe\n");
    else
        printf("unrated\n");
    return 0;
}
