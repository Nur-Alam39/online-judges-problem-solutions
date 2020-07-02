#include<bits/stdc++.h>
using namespace std;
int Int()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
    int tc = Int(), f;
    while(tc--)
    {
        string p, h;
        cin >> p >> h;
        vector<int> cntp(26);
        int n = h.size();
        for(int i = 0; p[i]; i++)
            cntp[p[i]-'a']++;
        for(int i = 0; i < n; i++)
        {
            f = 1;
            vector<int> cnth(26);
            for(int j = i; j < n; j++)
            {
                cnth[h[j] - 'a']++;
                if(cntp == cnth)
                {
                    printf("YES\n");
                    f = 0;
                    break;
                }
            }
            if(!f)
                break;
        }
        if(f)
            printf("NO\n");
    }
    return 0;
}
