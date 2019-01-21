#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,f=0;
    scanf("%d%d%d",&n,&m,&z);
    for(int i=1;i*m<=z;i++)
        if((i*m)%n==0)
            f++;
    printf("%d",f);
    return 0;
}


