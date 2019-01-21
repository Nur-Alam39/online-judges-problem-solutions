#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(scanf("%d",&n)&&n)
    {
        if(n==1)
        {
            printf("Discarded cards:");
            printf("\nRemaining card: 1\n");
        }
        else
        {
            queue<int>q;
            for(i=1; i<=n; i++)
                q.push(i);
            i=q.size();
            printf("Discarded cards: ");
            while(i!=1)
            {
                printf("%d",q.front());
                if(i>2)
                    printf(", ");
                q.pop();
                q.push(q.front());
                q.pop();
                i--;
            }
            printf("\nRemaining card: %d\n",q.front());
        }
    }
    return 0;
}
