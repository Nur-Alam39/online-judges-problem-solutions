#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0; i<5; i++)
        scanf("%d",&a[i]);
    int c[5]= {0};
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            //if(i!=j)
            if(a[i]==a[j])
               c[j]++;
        }
    for(int i=0; i<5; i++)
        printf("%d ",c[i]);
    return 0;
}
