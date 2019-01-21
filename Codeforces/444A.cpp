#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        int l=0;
        if(a[i]=='1')
        {
            for(int j=i+1;j<a.size();j++,i++)
            {
                if(a[j]=='0')l++;
                if(l==6)
                {
                    printf("yes");
                    return 0;
                }
            }
        }
    }
    printf("no");
    return 0;
}
