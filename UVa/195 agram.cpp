#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int n;
    char c;
    scanf("%d%c",&n,&c);
    while(n--)
    {
        char a;
        vector<char>s;
        while(1)
        {
            scanf("%c",&a);
            if(a=='\n')
                break;
            s.push_back(a);
        }
        int l=s.size();
        sort(s.begin(),s.end());
        do
        {
            for(int j=0; j<s.size(); j++)
                printf("%c",s[j]);
            printf("\n");
        }
        while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}
