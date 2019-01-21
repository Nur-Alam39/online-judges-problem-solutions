#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,z=1;
    char c;
    scanf("%d%c",&tc,&c);
    while(tc--)
    {
        string url[120];
        int man[10],ma=0;
        for(int i=0; i<10; i++)
        {
            cin>>url[i]>>man[i];
            ma=max(ma,man[i]);
        }
        printf("Case #%d:\n",z++);
        for(int i=0; i<10; i++)
            if(man[i]==ma)
                cout<<url[i]<<endl;
    }
    return 0;
}
