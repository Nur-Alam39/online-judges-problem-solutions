#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,m,d,i;
    scanf("%d",&y);
    for(i=y+1;;i++)
    {
        int m=i,d=0;
        set<int>a;
        while(m!=0)
        {
            a.insert(m%10);
            d++;
            m/=10;
        }
        if(d==a.size())
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}

