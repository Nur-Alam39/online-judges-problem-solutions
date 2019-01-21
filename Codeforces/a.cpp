#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(long long int i=a;; i+=c)
    {
        if(i==b)
        {
            printf("YES");
            break;
        }
        else if(b>0)
        {
            if(i>b||i<b)
            {
                printf("NO");
                break;
            }
        }
        else if(b<0)
        {
            if(i<b||i>b)
            {
                printf("NO");
                break;
            }
        }
    }
    return 0;
}
