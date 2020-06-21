#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[210000];
    while(scanf("%s",&a)!=EOF)
    {
        stack<char>b;
        b.push(a[0]);
        for(int i=1; a[i]; i++)
        {
            if(b.empty()||b.top()!=a[i])
                b.push(a[i]);
            else
                b.pop();
        }
        if(b.empty())
            printf("-1\n");
        else
        {
            vector<char>c;
            while(!b.empty())
            {
                c.push_back(b.top());
                b.pop();
            }
            for(int i=c.size()-1;i>=0;i--)
                printf("%c",c[i]);
            printf("\n");
        }

    }
    return 0;
}
