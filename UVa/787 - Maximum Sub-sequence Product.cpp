#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        vector<int>a;
        int n;
        while(1)
        {
            scanf("%d",&n);
            if(n==-999999)break;
            a.push_back(n);
        }
        int sum=1,maxsum=0,start=0,cur_st=0,end_in=0;
        for(int i=0; i<a.size(); i++)
        {
            sum*=a[i];
            if(sum>maxsum)
            {
                printf("Sum = %d\n",sum);
                maxsum=sum;
                start=cur_st;
                end_in=i;
            }
            if(sum<0)
            {
                sum=1;
                cur_st=i+1;
            }
        }
        printf("Maxsum = %d\nStart index = %d End index = %d\n",maxsum,start,end_in);
        for(int i=start; i<=end_in; i++)
            printf("%d ",a[i]);
    }
    return 0;
}

