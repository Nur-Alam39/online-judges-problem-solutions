#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],l=0,x=0;
    set<int>s;
    for(int i=0; i<6; i++)
        scanf("%d",&a[i]),s.insert(a[i]);
    if(s.size()<=3)
    {
        sort(a,a+6);
        for(int i=0; i<6; i++)
        {
            l=0;
            for(int j=i+1; j<6; j++)
            {

                if(a[i]==a[j])
                    l++;
                if(l==3)
                {
                    if(i==0)
                    {
                        if(a[4]==a[5])
                            printf("Elephant");
                        else
                            printf("Bear");
                    }
                    else if(i==1)
                    {
                        if(a[0]==a[5])
                            printf("Elephant");
                        else
                            printf("Bear");
                    }
                    else if(i==2)
                    {
                        if(a[0]==a[1])
                            printf("Elephant");
                        else
                            printf("Bear");
                    }
                    x=1;
                    break;
                }
            }
            if(l==2)
            {
                printf("Alien");
                x=1;
                break;
            }
            if(x==1)
                break;
        }
        printf("l=%d\n",l);
        if(l==1)
            printf("Alien");
    }
    else
        printf("Alien");

    return 0;
}
