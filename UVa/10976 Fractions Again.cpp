#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    while(scanf("%d",&k)==1)
    {
        vector<int>a,b;
        int c=0;
        for(int i=k+1;i<=2*k;i++)
        {
            if((k*i)%(i-k)==0)
            {
                c++;
                a.push_back((k*i)/(i-k));
                b.push_back(i);
            }
        }
        printf("%d\n",c);
        for(int i=0;i<a.size();i++)
            printf("1/%d = 1/%d + 1/%d\n",k,a[i],b[i]);
    }
    return 0;
}
