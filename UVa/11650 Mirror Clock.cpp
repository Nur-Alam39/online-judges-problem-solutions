#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int i=1,j=59,i1=1,j1=11;
    printf("00 -> 00\n");
    for(; i<=30; i++)
    {
        printf("%d -> %d\n",i,j);
        j--;
    }
    printf("hours:\n");
    printf("12 -> 12\n");
    for(; i1<=6; i1++)
    {
        printf("%d -> %d\n",i1,j1);
        j1--;
    }
    for(i=1; i<=100; i++)
    {
        printf("%d",i);
        delay(100);
        cleardevice();
    }
    return 0;
}
