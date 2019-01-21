#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int time=0,counter=0,flag=1,m=0;
    for(i=1; i<=90; i++)
    {
        if(counter==15)
            break;
        time++;
        counter++;
        if(i==a[m])
        {
            counter=0;
            m++;
        }
    }
    printf("%d",time);
    return 0;
}
