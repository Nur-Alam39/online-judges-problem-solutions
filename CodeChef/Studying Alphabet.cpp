#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int c;
    cin>>a>>c;
    sort(a.begin(),a.end());
    for(int i=0; i<c; i++)
    {
        cin>>b;
        sort(b.begin(),b.end());
        int c=0;
        for(int j=0; j<b.size(); j++)
            for(int k=0; k<a.size(); k++)
                if(a[k]==b[j])
                {
                    c++;
                    break;
                }
        if(c==b.size())
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

