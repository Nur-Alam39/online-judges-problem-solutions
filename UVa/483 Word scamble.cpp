#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a[10000];
    while(gets(a))
    {
        int m,j=0,k,l=0;
        char s[400];
        for(int i=0; a[i]; i=i+j+2 )
        {
            printf("%c ",a[i]);
            j=i;
            m=i;
            int n=0;
            while(a[j]!=32||a[j]!=0)
            {
                printf("a[j]=%c ",a[j]);
                s[n++]=a[j];
                n++;
                j++;
            }
            printf("s=%s\n",s);
            printf("j=%d\n",j);
            j--;
            printf("j=%d\n",j);
            /*s[n]='\0';
            strrev(s);
            printf("j=%d\n",j);
            for(k=0; s[k]; k++)
            {
                a[l++]=s[k];
            }
            i=l+1;*/
        }
        puts(a);
    }
    return 0;
}
