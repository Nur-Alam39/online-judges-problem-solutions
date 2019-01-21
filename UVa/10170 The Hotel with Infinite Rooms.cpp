#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,d,i,s;
    while(scanf("%ld%ld",&a,&d)==2)
    {
        s=0;
        for(i=a;; i++)
        {
            s+=i;
            if(s>=d)
            {
                printf("%ld\n",i);
                break;
            }
        }
    }
    return 0;
}

