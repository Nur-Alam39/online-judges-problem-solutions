#include<bits/stdc++.h>
using namespace std;
int Int(){int n; scanf("%d", &n); return n;}
int main()
{
    int n = Int();
    vector<pair<int, int> > tree;
    for (int i = 0; i < n; i++)
    {
        int p = Int(), a = Int();
        tree.push_back(make_pair(p, a));
    }
    tree.push_back(make_pair(0, 0));
    sort(tree.begin(), tree.end());
    int start = 0, left = 0, right = 0, s = tree.size();
    for (int i = 0; i < s; i++)
    {
        if(tree[i].first == 0)
        {
            start = i;
            if (start > 0 && start < s - 1)
            {
                left = i - 1;
                right = i + 1;
            }
            else if(start == 0 && i + 1 < s)
            {
                left = -1;
                right = start + 1;
            }
            else if(start == s - 1 && i - 1 >= 0)
            {
                right = -1;
                left = i - 1;
            }
            break;
        }
    }
    if (left < 0)
        cout << tree[right].second;
    else if (right < 0)
        cout << tree[left].second;
    else
    {
        int ans1 = 0, ans2 = 0;
        int f = 1;
        while(1)
        {
            if(f == 1)
            {
                if(left >= 0)
                {
                    ans1 += tree[left].second;
                    left--;
                    f = 0;
                }
                else
                    break;
            }
            else
            {
                if(right < s)
                {
                    ans1 += tree[right].second;
                    right++;
                    f = 1;
                }
                else
                    break;
            }
        }
        f = 1;
        while(1)
        {
            if(f == 1)
            {
                if(right < s)
                {
                    ans1 += tree[right].second;
                    right++;
                    f = 0;
                }
                else
                    break;

            }
            else
            {
                if(left >= 0)
                {
                    ans1 += tree[left].second;
                    left--;
                    f = 1;
                }
                else
                    break;
            }
        }
        printf("%d", max(ans1, ans2));
    }
    return 0;
}

