#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    if(a[0]%2==0||a[n-1]%2==0)
    {
        printf("No");
        return 0;
    }
    if(a[0]%2!=0&&a[n-1]%2!=0&&n%2!=0)
    {
        printf("Yes");
        return 0;
    }
    int ss=0,l=0,od=0,ev=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            od++,l++;
            if(od==2)
            {
                if(ev==0)
                    od=l=1,ss++;
                else if(l%2!=0)
                    ss++,od=0,l=0;
                else if(l%2==0)
                {
                    printf("No");
                    return 0;
                }
                ev=0;
            }
            else ev++;
        }
    }
    if(ss%2!=0)
        printf("Yes");
    else printf("No");
    return 0;
}
