#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,s[13],c=1,f;
    scanf("%d",&tc);
    while(tc--)
    {
        for(int i=0; i<13; i++)
            scanf("%d",s+i);
        f=1;
        for(int i=0; i<13; i++)
        {
            if(s[i]==0)
            {
                f=0;
                printf("Set #%d: No\n",c++);
                break;
            }
        }
        if(f==1)
            printf("Set #%d: Yes\n",c++);
    }
    return 0;
}

