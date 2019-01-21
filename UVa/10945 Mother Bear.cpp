#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[8000],d[6]="DONE";
    while(gets(a))
    {
        if(strcmp(a,d)==0)
            break;
        else
        {
            int i,j=0,m;
            char b[5000];
            for(i=0; a[i]; i++)
            {
                if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
                {
                    if(a[i]>=97&&a[i]<=122)
                        a[i]=a[i]-32;
                    b[j++]=a[i];
                }
            }
            b[j]='\0';
            if(b[0]=='\0')
                printf("You won't be eaten!\n");
            else
            {
                char c[5000];
                strcpy(c,b);
                strrev(c);
                m=strcmp(b,c);
                if(m==0)
                    printf("You won't be eaten!\n");
                else
                    printf("Uh oh..\n");
            }
        }
    }
    return 0;
}

