#include<bits/stdc++.h>
using namespace std;
int tri_area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int d=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-Y2);
    if(d<0)return -1;
    return 1;
}
int main()
{
    int tc,a[12];;
    scanf("%d",&tc);
    while(tc--)
    {
        for(int i=0; i<8; i++)scanf("%d",&a[i]);
        a[8]=a[4];
        a[9]=a[7];
        a[10]=a[6];
        a[11]=a[5];


    }
    return 0;
}

