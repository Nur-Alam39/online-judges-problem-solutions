#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,fr,sr,i;
    scanf("%d%d",&k,&r);
    for(i=1;; i++)
    {
        fr=(i*k)%10;
        if(fr==0)
        {
            printf("%d",i);
            break;
        }
        else
        {
            if(r==fr)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}

