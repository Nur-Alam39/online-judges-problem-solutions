#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    while(scanf("%d",&n))
    {
        char a[12000],b[12000],c[12000],c1[12000];
        a[0]='1';
        b[0]='1';
        a[1]='\0';
        b[1]='\0';
        for(num=1; num<=n-2; num++)
        {
            int al,bl,i,j,carry=0,maxlen,k;
            al=strlen(a);
            bl=strlen(b);
            if(al>bl)
                maxlen=al;
            else
                maxlen=bl;
            if(al!=maxlen)
            {
                int need=maxlen-al;
                al--;
                for(i=maxlen-1; i>=0; i--)
                    a[i]=a[al--];
                for(i=0; i<need; i++)
                    a[i]='0';
                a[maxlen]='\0';
            }
            else if(bl!=maxlen)
            {
                int need=maxlen-bl;
                bl--;
                for(i=maxlen-1; i>=0; i--)
                    b[i]=b[bl--];
                for(i=0; i<need; i++)
                    b[i]='0';
                b[maxlen]='\0';
            }
            a[al]='\0';
            b[bl]='\0';
            int m=0;
            for(i=maxlen-1; i>=0; i--)
            {

                int sum=0,n1,n2;
                n1=a[i]-'0';
                n2=b[i]-'0';
                sum+=n1+n2;
                sum+=carry;
                c[m]=sum%10+'0';
                carry=sum/10;
                m++;
            }
            c[m]='\0';
            i=0;
            if(carry>0)
                c1[i++]=carry+'0';
            al=strlen(c);
            for(k=al-1; k>=0; k--)
                c1[i++]=c[k];
            c1[i]='\0';
            strcpy(a,b);
            strcpy(b,c1);
        }
        printf("The Fibonacci number for %d is ",n);
        puts(b);
    }
    return 0;
}
