#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,r,R;
    scanf("%d%d",&tc,&r);
    for(int i=1;i<=tc;i++)
        {
            scanf("%d",&R);
            if(R>=r)printf("Good boi\n");
            else if(R<r)printf("Bad boi\n");
        }
    return 0;
}

