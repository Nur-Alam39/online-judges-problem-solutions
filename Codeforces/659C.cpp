#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,cost;
    scanf("%ld%ld",&n,&cost);
    long int a[n],k=0,sum=0,j=0,i;
    vector <int>b;
    for(i=0; i<n; i++)
        scanf("%ld",&a[i]);
    sort(a,a+i);
    for(i=1; i<=cost; i++)
    {
        if(a[k]==i)
            k++;
        else if(a[k]!=i)
        {
            if(sum<cost)
            {
                b.push_back(i);
                j++;
                sum+=i;
                if(sum>cost)
                {
                    j--;
                    break;
                }
            }
            else
                break;
        }
    }
    printf("%ld\n",j);
    for(int i=0; i<j; i++)
        printf("%ld ",b[i]);
    return 0;
}
