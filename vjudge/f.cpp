#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int c=1;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            c++;
            while(1)
            {
                if(a[i]>=65&&a[i]<=90)
                    break;
                else
                    i++;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}

