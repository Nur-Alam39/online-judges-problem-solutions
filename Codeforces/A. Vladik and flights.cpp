#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,d1,d2,d3,d4;
    char ch;
    scanf("%d%d%d%c",&n,&a,&b,&ch);
    char d[n+4];
    scanf("%s",&d);
    a--,b--;
    if(a<b)
    {
        if((d[a]=='1'&&d[b]=='1')||(d[a]=='0'&&d[b]=='0'))
            printf("0");
        else
        {
            if(d[a]=='0'&&d[b]=='1')
            {
                for(i=a+1;; i++)
                    if(d[i]=='1')
                        break;
                d1=i-a;
                for(i=a-1;; i--)
                    if(d[i]=='1')
                        break;
                d4=a-i;
                for(i=b-1;; i--)
                    if(d[i]=='0')
                        break;
                d2=b-i;
                for(i=b+1; i<n; i++)
                    if(d[i]=='0')
                        break;
                d3=i-b;
            }
            else if(d[a]=='1'&&d[b]=='0')
            {
                for(i=a+1;; i++)
                    if(d[i]=='0')
                        break;
                d1=i-a;
                for(i=a-1;; i--)
                    if(d[i]=='0')
                        break;
                d4=a-i;
                for(i=b-1; i>=0; i--)
                    if(d[i]=='1')
                        break;
                d2=b-i;
                for(i=b+1; i<n; i++)
                    if(d[i]=='1')
                        break;
                d3=i-b;
            }
            printf("%d",min(min(min(d1,d2),d3),d4);
        }
    }
    else if(a>b)
    {
        if((d[a]=='1'&&d[b]=='1')||(d[a]=='0'&&d[b]=='0'))
            printf("0");
        else
        {
            if(d[a]=='0'&&d[b]=='1')
            {
                for(i=a-1; i>=0; i--)
                    if(d[i]=='1')
                        break;
                for(i=a-1;; i--)
                    if(d[i]=='1')
                        break;
                d1=a-i;
                d1=a-i;
                for(i=b+1; i<n; i++)
                    if(d[i]=='0')
                        break;
                d2=i-b;
                for(i=b-1; i>=0; i--)
                    if(d[i]=='0')
                        break;
                d3=b-i;
            }
            else if(d[a]=='1'&&d[b]=='0')
            {
                for(i=a-1;; i--)
                    if(d[i]=='0')
                        break;
                d1=a-i;
                for(i=a+1;; i++)
                    if(d[i]=='0')
                        break;
                d4=i-a;
                for(i=b+1;; i++)
                    if(d[i]=='1')
                        break;
                d2=i-b;
                for(i=b-1; i>=0; i--)
                    if(d[i]=='1')
                        break;
                d3=b-i;
            }
            printf("%d",min(min(min(d1,d2),d3),d4);
        }
    }
    else
        printf("0");
    return 0;
}
