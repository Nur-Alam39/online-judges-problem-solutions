#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
        {
            for(int j=2;j<=n;j++)
            {
                if(i%j==0)
                {
                    if(i*j>n&&i/j<n)
                    return printf("%d %d",i,j),0;
                }
            }
        }
    return printf("-1"),0;
}
