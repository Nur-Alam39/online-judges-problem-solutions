#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    scanf("%s",a);
    char b[10],c[1000],d[1000],e[1000];
    int i,j,l,m=0,n,k=0;
    l=strlen(a);
    l--;
    for(i=l;; i--)
        if(a[i]=='e')
            break;
    for(j=i+1; a[j]; j++)
        b[k++]=a[j];
    b[k]='\0';
    n=atoi(b);
    for(i=0; a[i]!='e'; i++)
    {
        if(a[i]!='.')
            c[m++]=a[i];
    }
    c[m]='\0';
    k=0;
    for(j=0; c[j]; j++)
    {
        d[k]=c[j];
        k++;
        if(j==n&&c[j+1]!='\0')
        {
            d[k]='.';
            k++;
        }
    }
    d[k]='\0';
    int o=1;
    for(i=0; d[i]; i++)
    {
        if(d[i]=='0'||d[i]=='.');
        else
        {
            o=0;
            break;
        }
    }

    for(i=0; d[i]!='.'; i++)
        if(d[i]=='1'||d[i]=='2'||d[i]=='3'||d[i]=='4'||d[i]=='5'||d[i]=='6'||d[i]=='7'||d[i]=='8'||d[i]=='9')
            break;
    k=0;
    for(j=i; d[j]; j++)
        e[k++]=d[j];
    e[k]='\0';
    if(o==1)
        printf("0");
    else if(e[2]=='0'&&e[3]=='\0')
        printf("%c",e[0]);
    else
    {
        if(e[0]=='.')
        {
            printf("0");
            printf("%s",e);
        }
        else
            printf("%s",e);
        l=strlen(e);
        l--;
        if(n>l)
        {
            for(i=0; i<n-l; i++)
                printf("0");
        }
    }
    return 0;
}
