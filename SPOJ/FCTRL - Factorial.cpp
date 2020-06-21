#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,d;
    scanf("%d",&tc);
    while(tc--)
    {
        long int n,sum=0;
        scanf("%ld",&n);
        i=1;
        while(1)
        {
            d=n/pow(5,i);
            if(d>0)
                sum+=d;
            else
                break;
            i++;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
