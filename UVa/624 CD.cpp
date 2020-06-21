#include<bits/stdc++.h>
using namespace std;

int N, t, a[25], Max = INT_MIN;
vector<int> temp, ans;

void knapsack(int x, int sum)
{
    if (x == t)
    {
        if (sum > Max && sum <= N)
        {
            Max = sum;
            temp = ans;
        }
        return;
    }
    ans.push_back(a[x]);
    knapsack(x + 1, sum + a[x]);
    ans.pop_back();
    knapsack(x + 1, sum);
}

int main()
{
    while(scanf("%d", &N) == 1)
    {
        Max = INT_MIN;
        scanf("%d", &t);
        for (int i = 0; i < t; i++)scanf("%d", &a[i]);
        knapsack(0, 0);
        for (int i = 0; i < temp.size(); i++)printf("%d ", temp[i]);
        printf("sum:%d\n", Max);
    }
    return 0;
}
