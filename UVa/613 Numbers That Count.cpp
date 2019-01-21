#include<bits/stdc++.h>
using namespace std;
char mem[20][200],x[200];
int iter=0,p=0;
int self_invent(char n[])
{
    char b[200];
    int a[10],j=0;
    for(int i=0; i<10; i++)
        a[i]=0;
    int l=strlen(n);
    for(int i=0; i<l; i++)
        a[n[i]-48]++;
    for(int i=0; i<10; i++)
        if(a[i]>0)
            b[j++]=a[i]+48,b[j++]=i+48;
    b[j]='\0';
    p++;
    printf("b=%s x=%s p=%d\n",b,x,p);
    if(x==b&&p==1)
    {
        printf("%s is self-inventorying\n",x);
        return 0;
    }
    else if(p>1&&p<16&&x==b)
    {
        printf("%s is self-inventorying after %d steps\n",x,p);
        return 0;
    }
    else if(p>15)
    {
        printf("%s can not be classified after 15 iterations\n",x);
        return 0;
    }
    else
        return self_invent(b);
}
int main()
{
    while(scanf("%s",&x)==1)
    {
        if(x[0]=='-'&&x[1]=='1')
            break;
        for(int i=0; i<20; i++)
            for(int j=0; j<200; j++)
                mem[i][j]='\0';
        self_invent(x);
    }
    return 0;
}
