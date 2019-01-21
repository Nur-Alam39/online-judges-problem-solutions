#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=-1,t=0;
    scanf("%d",&n);
    char c[n];
    scanf("%s",&c);
    vector<int>f;
    vector<char>d;
    for(int i=0; i<n; i++)
    {
        x=0;
        if(c[i]=='G')
        {
            d.push_back('G');
            while(c[i]=='G')
                x++,i++,t++;
        }
        else
        {
            d.push_back('S');
            while(c[i]=='S')
                x++,i++;
        }
        f.push_back(x),i--;
    }
    int sz=f.size();
    if(sz==1)
    {
        if(d[0]=='G')
            printf("%d",f[0]);
        else
            printf("0");
    }
    else if(sz==2)
    {
        if(d[0]=='G')
            printf("%d",f[0]);
        else
            printf("%d",f[1]);
    }
    else
    {
        for(int i=0;i<sz;i++)
        {
            if(d[i]=='G')
            {
                if(t-f[i]>0)
                {

                }
            }
        }
    }
    return 0;
}
