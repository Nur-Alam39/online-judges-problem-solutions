#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[2000],a1[100];
    j=0;
    for(i=1;; i++)
    {
        if(j==1100)
            break;
        else if(i<10)
            {
                a[j]=i+'0';
                j++;
            }
        else
        {
            int x=i,c=0;
            while(x!=0)
            {
                int b=x%10;
                a1[c++]=b+'0';
                x=x/10;
            }
            for(int v=c-1; v>=0; v--)
            {
                a[j]=a1[v];
                j++;
                if(j==1100)
                    break;
            }
        }
    }
    n--;
    printf("%c",a[n]);
    return 0;
}

