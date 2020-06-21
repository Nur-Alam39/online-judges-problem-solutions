#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    stack<char>sa,sb,sc;
    for(int i=a.size()-1; i>=0; i--)
        sa.push(a[i]);
    for(int i=b.size()-1; i>=0; i--)
        sb.push(b[i]);
    for(int i=c.size()-1; i>=0; i--)
        sc.push(c[i]);
    char r;
    r=sa.top();
    sa.pop();
    while(1)
    {
        if(r=='a')
        {
            if(sa.empty()==true)
            {
                printf("A\n");
                break;
            }
            r=sa.top();
            sa.pop();

        }
        else if(r=='b')
        {
            if(sb.empty()==true)
            {
                printf("B\n");
                break;
            }
            r=sb.top();
            sb.pop();
        }
        else if(r=='c')
        {
            if(sc.empty()==true)
            {
                printf("C\n");
                break;
            }
            r=sc.top();
            sc.pop();
        }
    }
    return 0;
}

