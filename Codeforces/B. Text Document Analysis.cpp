#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,nw=0,j,i,m=0;
    char c;
    scanf("%d%c",&n,&c);
    char a[n+4];
    scanf("%s",&a);
    for(i=0; i<n;)
    {
        if(a[i]=='(')
        {
            int f=0;
            i++;
            for(j=i;; j++,i++)
            {
                if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122))
                {
                    if(f==0)
                    {
                        nw++;
                        f=1;
                    }

                }
                else if(a[j]==')')
                    break;
                else if(a[j]=='_')
                    f=0;
            }
        }
        else if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
        {
            for(j=i; ; j++,i++)
            {
                if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122))
                    l++;
                else
                    break;
            }
            m=max(m,l);
            l=0;
        }
        else
            i++;
    }
    printf("%d %d",m,nw);
    return 0;
}

