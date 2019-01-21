#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int m,num[1000],i=0,j;
        char c;
        while(1)
        {
            scanf("%d%c",&m,&c);
            num[i++]=m;
            if(c=='\n')
                break;
        }
        for(j=0; j<i; j++)
            printf("%d ",num[j]);
        int gcd[i],k=0,max_gcd,b;
        for(j=0; j<i; j++)
            for(b=j+1; b<i; b++)
            {
                gcd[k]=GCD(num[j],num[b]);
                k++;
            }
        max_gcd=gcd[0];
        for(m=1; m<k; m++)
        {
            if(gcd[m]>gcd[m-1])
                max_gcd=gcd[m];
        }
        printf("%d\n",max_gcd);
    }
    return 0;
}

