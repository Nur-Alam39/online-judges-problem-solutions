#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a,long long int b)
{
    while(b!=0)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
int main()
{
    long long int N,i,j,S;
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld",&N);
        S=0;
        for(i=1; i<=N; i++)
            for(j=1; j<=N; j++)
                if((N%i)==0&&(N%j)==0)
                    S+=GCD(i,j);

        printf("Case %d: %lld\n",c++,S);
    }
    return 0;
}

