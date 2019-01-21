#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[11];
    for(int i=0; i<10; i++)
        getline(cin,a[0]);
    for(int i=0; i<10; i++)
    {
        int c=0;
        for(int j=0; j<10; j++)
        {
            if(a[i][j]=='X')
                c++;
            if(c>=5)
            {
                printf("YES\n");
                return 0;
            }
            else if(a[i][j]=='O'&&a[i][j]<5)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    return 0;
}
