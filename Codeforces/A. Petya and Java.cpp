#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200];
    scanf("%s",&a);
    int l=strlen(a),i=0,j,p=l,x,m=1;
    unsigned long long int n=0,g;
    if(a[0]=='-')p--,i=1,m=0;
    if(p>19)
        printf("BigInteger\n");
    else
    {
        for(p--; i<l; i++,p--)
        {
            x=p;
            g=1;
            while(x)
            {
                g*=10;
                x--;
            }
            n+=(a[i]-'0')*g;
        }
        if(n==9223372036854775808)
        {
            printf("BigInteger\n");
            return 0;
        }
        if(n<=127)
            printf("byte\n");
        else if(n<=32767)
            printf("short\n");
        else if(n<=2147483647)
            printf("int\n");
        else if(n<=9223372036854775807)
            printf("long\n");
        else
            printf("BigInteger\n");
    }
    return 0;
}
