#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=1,y=0;
    for(int i=1;; i++)
    {
        if(x==1)
        {
            if(a-i>=0)
                a-=i,x=0;
            else
            {
                printf("Vladik");
                return 0;
            }
        }
        else
        {
            if(b-i>=0)
                b-=i,x=1;
            else
            {
                printf("Valera");
                return 0;
            }
        }
    }
    return 0;
}
