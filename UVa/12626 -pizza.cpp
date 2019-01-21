#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        string a;
        cin>>a;
        int n[7]= {0},f=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='M')
                n[0]++;
            else if(a[i]=='A')
                n[1]++;
            else if(a[i]=='R')
                n[2]++;
            else if(a[i]=='G')
                n[3]++;
            else if(a[i]=='I')
                n[4]++;
            else if(a[i]=='T')
                n[5]++;
        }
        for(int i=0;; i++)
        {
            if(n[0]>=1&&n[1]>=3&&n[2]>=2&&n[3]>=1&&n[4]>=1&&n[5]>=1)
            {
                f++;
                n[0]--,n[1]-=3,n[2]-=2,n[3]--,n[4]--,n[5]--;
            }
            else
                break;
        }
        printf("%d\n",f);
    }
    return 0;
}

