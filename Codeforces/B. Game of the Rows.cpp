#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,g;
    scanf("%d%d",&n,&k);
    int t=8*n,temp=0,a[k];
    for(int i=0; i<k; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<k; i++)
    {
        if(t==0)
            if(temp+g<=8)
            {
                temp=g;
                t-=g;
            }
    }
    return 0;
}
