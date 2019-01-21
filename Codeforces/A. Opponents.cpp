#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,sum=0,max=0,c;
    scanf("%d%d",&n,&d);
    char a[n];
    for(int j=0; j<d; j++)
    {
        scanf("%s",&a);
        c=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='0')
            {
                c=0;
                sum++;
                if(sum>max)
                    max=sum;
                break;
            }
        }
        if(c==1)
        {
            if(sum>max)
                max=sum;
            sum=0;
        }
    }
    printf("%d",max);
    return 0;
}


