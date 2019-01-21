#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,sum=0,m;
    scanf("%ld",&n);
    int c=0,f,d;
    vector<long int>a;
    for(long int i=n;i>=1;i--)
    {
        m=i;
        f=1;
        cout<<"c_n="<<m<<endl;
        while(m!=0)
        {
            d=m%10;
            cout<<d<<" ";
            if(d!=0||d!=1)
            {
                f=0;
                break;
            }
            m/=10;
        }
        if(f==1)
        {
            if(sum+i<n)
              {
                  sum+=i;
                  a.push_back(i);
              }
            else if(sum+i==n)
            {
                sum+=i;
                a.push_back(i);
                break;
            }
        }
    }
    printf("%d\n",a.size());
    for(int i=0;i<a.size();i++)
        printf("%ld ",a[i]);
    return 0;
}
