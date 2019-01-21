#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[20],b[20];
    while(scanf("%s%s",&a,&b))
    {
        int al,bl,i,j,carry=0,maxlen,counter=0;
        if(a[0]=='0'&&b[0]=='0')
            break;
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
        }
        else if(bl!=maxlen)
        {
            int need=maxlen-bl;
            bl--;
            for(i=maxlen-1; i>=0; i--)
                b[i]=b[bl--];
            for(i=0; i<need; i++)
                b[i]='0';
        }
        for(i=maxlen-1; i>=0; i--)
        {
            int sum=0,n1,n2;
            n1=a[i]-'0';
            n2=b[i]-'0';
            sum+=n1+n2;
            sum+=carry;
            carry=sum/10;
            if(carry>0)
                counter++;
        }
        if(counter==0)
            printf("No carry operation.\n");
        else if(counter==1)
            printf("1 carry operation.\n");
        else if(counter>1)
            printf("%d carry operations.\n",counter);
    }
    return 0;
}
