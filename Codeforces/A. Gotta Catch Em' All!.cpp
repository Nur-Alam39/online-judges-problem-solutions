#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n[7]={0},f=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='B')
            n[0]++;
        else if(a[i]=='u')
            n[1]++;
        else if(a[i]=='l')
            n[2]++;
        else if(a[i]=='b')
            n[3]++;
        else if(a[i]=='a')
            n[4]++;
        else if(a[i]=='s')
            n[5]++;
        else if(a[i]=='r')
            n[6]++;
    }
    for(int i=0;;i++)
    {
        if(n[0]>=1&&n[1]>=2&&n[2]>=1&&n[3]>=1&&n[4]>=2&&n[5]>=1&&n[6]>=1)
        {
            f++;
            n[0]--,n[1]-=2,n[2]--,n[3]--,n[4]-=2,n[5]--,n[6]--;
        }
        else
            break;
    }
    printf("%d",f);
    return 0;
}
