#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,n,c=1,j=0,b=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%2)b++;
            else j++;
        }
        if(b%2)c+=1;
        printf("%d\n",c);
    }
    return 0;
}
