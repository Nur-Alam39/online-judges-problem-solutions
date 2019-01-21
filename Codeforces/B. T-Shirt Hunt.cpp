#include<bits/stdc++.h>
using namespace std;
int bS(int arr[],int l,int r,int x)
{
    if (r>=l)
    {
        int mid=l+(r-l)/2;
        if (arr[mid]==x)return mid;
        if (arr[mid]>x)return bS(arr,l,mid-1,x);
        return bS(arr,mid+1,r,x);
    }
    return -1;
}
int main()
{
    int p,x,y,i;
    scanf("%d%d%d",&p,&x,&y);
    vector<int>a;
    for(int i=x-50; i>=y; i-=50)
        a.push_back(i);
    for(int i=x; i<=300000; i+=50)
        a.push_back(i);
    for(int m=0; m<a.size(); m++)
    {
        int pos[25];
        i=(a[m]/50)%475;
        for(int k=0; k<25; k++)
        {
            i=(i*96+42)%475;
            pos[k]=26+i;
        }
        sort(pos,pos+25);
        int result=bS(pos,0,24,p);
        if(result!=-1)
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
    return 0;
}
