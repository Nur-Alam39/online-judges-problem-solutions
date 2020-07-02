#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    int n = Int();
    int a[n];
    long long int total = 0, p_1_3 = 0, p_2_3 = 0, curr_sum = 0, cnt_p_1_3 = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        a[i] = Int();
        total += a[i];
    }
    if(total % 3 != 0 )
    {
        printf("0");
        return 0;
    }
    p_1_3 = total / 3;
    p_2_3 = p_1_3 * 2;
    for(int i = 0; i < n - 1; i++)
    {
        curr_sum += a[i];
        if(curr_sum == p_2_3)
           ans += cnt_p_1_3;
        if(curr_sum == p_1_3)
            cnt_p_1_3++;
    }
    printf("%I64d", ans);
    return 0;
}
