#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int s=sqrt(n);
    for(int i=1; i<=s; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                c++;
            else
                c+=2;
        }
    }
    printf("%d",c-1);
    return 0;
}
