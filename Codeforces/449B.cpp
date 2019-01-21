#include<bits/stdc++.h>
#define lli long long int
#define N 100000000
using namespace std;
vector <lli> palin;
void isPalindrome()
{
    for(lli k=11; k<=N;)
    {
        lli rev=0,digit=0;
        for(lli i=k; i>0; i/=10,digit++)rev=rev*10+i%10;
        if(k==rev)if(digit%2==0)palin.push_back(k);
        if(k==100)k+=900;
        else if(k==10000)k+=90000;
        else if(k==1000000)k+=9000000;
        else if(k==100000000)k+=900000000;
        else if(k==10000000000)k+=90000000000;
        else if(k==1000000000000)k+=9000000000000;
        else if(k==100000000000000)k+=900000000000000;
        else k++;
    }
    //for(lli i=0;i<palin.size();i++)printf("%lld ",palin[i]);
    printf("\nsize=%lld\n",palin.size());
}
int main()
{
    isPalindrome();

    return 0;
}
