#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,k,j;
    char ch;
    scanf("%ld%c",&n,&ch);
    int s[26];
    char c[n],comp[30]="abcdefghijklmnopqrstuvwxyz";
    gets(c);
    for(i=0; i<26; i++)
        s[i]=0;
    long int l=strlen(c);
    if(l<=26)
    {
        for(k=0; k<l; k++)
        {
            for(j=0; j<26; j++)
                if(c[k]==comp[j])
                {
                    s[j]++;
                    break;
                }
        }
        int w[26],m=0,flag=0,h[26],y=0,sum=0;
        for(i=0; i<26; i++)
        {
            if(s[i]>1)
                h[y++]=s[i];
        }
        for(i=0; i<26; i++)
        {
            if(s[i]==1)
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("0");
        else
        {
            for(i=0; i<y; i++)
                sum+=h[i]-1;
            printf("%d",sum);
        }
    }
    else
        printf("-1");
    return 0;
}

