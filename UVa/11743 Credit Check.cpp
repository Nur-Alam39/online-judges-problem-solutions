#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    scanf("%d%c",&n,&ch);
    while(n--)
    {
        char a[40],b[40];
        int i,j=0,d,l,sum1=0,sum2=0,sum;
        gets(a);
        for(i=0; a[i]; i++)
            if(a[i]!=' ')
                b[j++]=a[i];
        b[j]='\0';
        for(i=j-2; i>=0; i-=2)
        {
            d=(b[i]-'0')*2;
            if(d>=10)
                d=d-9;
            sum1+=d;
            sum2+=b[i+1]-'0';
        }
        sum=sum1+sum2;
        sum%=10;
        if(sum==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
