#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char a[1000],b[1000],a1[1000],b1[1000],output[1200],output1[1200],output2[1200],output3[1200];
        scanf("%s%s",&a,&b);
        int al,bl,i,j,carry=0,maxlen,k;
        al=strlen(a);
        bl=strlen(b);
        j=0;
        for(i=al-1; i>=0; i--)
            a1[j++]=a[i];
        a1[j]='\0';
        j=0;
        for(i=bl-1; i>=0; i--)
            b1[j++]=b[i];
        b1[j]='\0';
        if(al>bl)
            maxlen=al;
        else
            maxlen=bl;
        if(al!=maxlen)
        {
            int need=maxlen-al;
            al--;
            for(i=maxlen-1; i>=0; i--)
                a1[i]=a1[al--];
            for(i=0; i<need; i++)
                a1[i]='0';
            a1[maxlen]='\0';
        }
        else if(bl!=maxlen)
        {
            int need=maxlen-bl;
            bl--;
            for(i=maxlen-1; i>=0; i--)
                b1[i]=b1[bl--];
            for(i=0; i<need; i++)
                b1[i]='0';
            b1[maxlen]='\0';
        }
        int m=0;
        for(i=maxlen-1; i>=0; i--)
        {

            int sum=0,n1,n2;
            n1=a1[i]-'0';
            n2=b1[i]-'0';
            sum+=n1+n2;
            sum+=carry;
            output[m]=sum%10+'0';
            m++;
            carry=sum/10;
        }
        output[m]='\0';
        j=m-1;
        i=0;
        if(carry>0)
            output1[i++]=carry+'0';
        for(; i<=m; i++)
            output1[i]=output[j--];
        j--;
        output1[i]='\0';
        for(k=0; output1[k]=='0'; k++);
        al=0;
        for(j=k; j<i; j++)
            {
                output2[al]=output1[j];
                al++;
            }
        output2[al]='\0';
        int l=strlen(output2);
        j=0;
        for(k=l-1; k>=0; k--)
            {
                output3[j]=output2[k];
                j++;
            }
        output3[j]='\0';
        for(k=0; output3[k]=='0'; k++);
        al=0;
        for(i=k; i<j; i++)
            printf("%c",output3[i]);
        printf("\n");
    }
    return 0;
}

