#include<bits/stdc++.h>
using namespace std;

int Int(){int n; scanf("%d", &n); return n;}
void Print(int n){printf("%d", n);}

int main()
{
    int tc = Int();
    while(tc--)
    {
        string s, t, z = "";
        cin >> s >> t;
        int l1 = s.size();
        int l2 = t.size();
        int j = 0, cnt = 0;
        for(int i = 0; i < l2; i++)
        {
            for(; j < l1; j++)
            {
                if(t[i] == s[j])
                {
                    z += s[j];
                    break;
                }
            }
            if(j == l1)
                j = 0;
            i += z.size() - 1;
            cnt++;
        }
        cout << z <<" = " << cnt << endl;
    }
    return 0;
}

