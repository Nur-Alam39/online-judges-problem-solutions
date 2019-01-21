#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b;
    scanf("%d%d",&b,&t);
    int a[b],mx=-100;
    for(int i=0; i<b; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<b; i++)
    {
        int n_b=0,t_p=t;
        for(int j=i; j<b&&t_p; j++)
        {
          if(a[j]<=t_p)
            n_b++,t_p-=a[j];
        }
        if(n_b>mx)mx=n_b;
    }
    printf("%d",mx);
    return 0;
}

