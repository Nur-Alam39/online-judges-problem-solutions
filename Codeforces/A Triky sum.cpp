#include<bits/stdc++.h>
using namespace std;
int is_p_2(long int x)
{
    return ((x != 0) && ((x & (x - 1)) == 0));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int n;
    long long int sum=0;
    cin>>n;
    for(long int i=1; i<=n; i++)
    {
        int c=is_p_2(i);
        if(c==true)
            {
                sum-=i;
                cout<<-i<<" "<<sum<<endl;
            }
        else
            {
                sum+=i;
                cout<<i<<" "<<sum<<endl;
            }
    }
    cout<<sum;
    return 0;
}
