#include<bits/stdc++.h>
using namespace std;

int Int(){int n; scanf("%d", &n); return n;}
void Print(int n){printf("%d", n);}

int main()
{
    int tc = Int();
    while(tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        int a[2];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            int d = s[i] - 48;
            if (d % 2)
            {
                a[j++] = d;
                if (j > 1)break;
            }
        }
        if (j == 2)printf("%d%d\n", a[0], a[1]);
        else printf("-1\n");
    }
    return 0;
}


