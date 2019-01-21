#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,s,x;
    scanf("%ld%ld%ld",&t,&s,&x);
    if(t==x)
        printf("YES");
    else
    {
        for(int i=1;; i++)
        {
            long int n1=0,n2=0;
            n1=t+i*s;
            n2=n1+1;
            if(n1==x||n2==x)
            {
                printf("YES");
                break;
            }
            else if(n1>x||n2>x)
            {
                printf("NO");
                break;
            }
        }
    }
    return 0;
}
