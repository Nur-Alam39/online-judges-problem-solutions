#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    while(1)
    {long int c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                if(i+j>k)
                {
                    a=i^j;
                    b=a^k;
                    if(!b)c++;
                }
            }
        }
    }
    printf("%ld\n",c);
    }
    return 0;
}

