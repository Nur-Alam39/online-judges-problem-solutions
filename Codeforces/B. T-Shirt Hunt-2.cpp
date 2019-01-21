#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,x,y,i;
    scanf("%d%d%d",&p,&x,&y);
    vector<int>a;
    for(int i=x-50; i>=y; i-=50)a.push_back(i);
    for(int i=x; i<=300000; i+=50)a.push_back(i);
    for(int m=0; m<a.size(); m++)
    {
        i=(a[m]/50)%475;
        for(int k=0; k<25; k++)
        {
            i=(i*96+42)%475;
            if(i+26==p)
            {
                if(a[m]<=x)
                    printf("0");
                else
                {
                    int v=ceil((float)(a[m]-x)/100.00);
                    printf("%d",v);
                }
                return 0;
            }
        }
    }
    return 0;
}

