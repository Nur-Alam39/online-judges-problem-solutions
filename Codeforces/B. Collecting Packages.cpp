#include<bits/stdc++.h>
using namespace std;
int Int()
{
    int n;
    scanf("%d", &n);
    return n;
}
int main()
{
    int tc = Int();
    while (tc--)
    {
        int n = Int(), x, y;
        list<int> a[1002];
        for(int i = 0; i < n; i++)
        {
            x = Int(), y = Int();
            a[x].push_back(y);
        }
        for(int i = 0; i <= 1001; i++)
        {
            if(a[i].size())
                a[i].sort();
        }
        int p = 0, q = 0, f, t;
        //printf("\n");
        string g = "";
        int w = 1;
        for(int i = 0; i <= 1001; i++)
        {
            //printf("HERE1\n");
            t = 1;
            list <int> :: iterator it;
            if(a[i].size())
            {
                f = 1;
                for(it = a[i].begin(); it != a[i].end(); ++it)
                {
                    int u = i, v = *it;
                    //cout << u <<" " << v;
                    t = 1;
                    if(p > u || q > v)
                    {
                        printf("NO\n");
                        t = f = w = 0;
                        break;
                    }
                    while(p != u)
                    {
                       g += 'R';
                       p++;
                    }
                    while(q != v)
                    {
                       g += 'U';
                       q++;
                    }
                    //printf("p = %d q =%d\n", p, q);
                }
                //printf("\n");
                if(!f)break;
            }
            if(!t)break;
        }
        if(w)cout<< "YES\n" << g << endl;
    }
    return 0;
}



