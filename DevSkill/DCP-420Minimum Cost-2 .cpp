#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,a;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int mn=INT_MAX;
        long long int mov=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a),mov+=a;
            if(mn>a)mn=a;
        }
        a=mov-mn*n;
        printf("%d\n",a);
    }
    return 0;
}


