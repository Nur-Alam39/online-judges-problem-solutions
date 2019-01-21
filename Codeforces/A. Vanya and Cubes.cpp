#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,sum1=0,i,c=1;
    scanf("%d",&n);
    for(int i=1;; i++)
    {
        sum=0;
        for(int j=1;j<=i;j++)
            sum+=j;
        sum1+=sum;
        if(sum1==n)
            break;
        else if(sum1>n)
        {
            c--;
            break;
        }
        else c++;
    }
    printf("%d",c);
    return 0;
}
