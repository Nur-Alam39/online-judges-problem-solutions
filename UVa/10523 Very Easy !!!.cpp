#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a;
    while(cin>>n>>a)
    {
        int i;
        unsigned long long int sum=0;
        for(i=1; i<=n;i++)
            sum=sum+i*pow(a,i);
     cout<<sum<<endl;
    }
    return 0;
}

