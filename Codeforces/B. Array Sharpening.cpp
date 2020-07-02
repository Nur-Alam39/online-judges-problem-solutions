#include<bits/stdc++.h>
using namespace std;

int Int(){int n; scanf("%d", &n); return n;}
void Print(int n){printf("%d", n);}

bool check_left(int start, int a[])
{
    int l = start - 1;
    int curr = a[start];
    while (l >= 0)
    {
        if (a[l] < curr)curr = a[l];
        else if (a[l] >= curr)
        {
            a[l] = curr - 1;
            curr = a[l];
            if (curr < 0)return false;
        }
        l--;
    }
    return true;
}

bool check_right(int start, int a[], int n)
{
    int r = start + 1;
    int curr = a[start];
    while (r < n)
    {
        if (curr > a[r])curr = a[r];
        else if (curr <= a[r])
        {
            a[r] = curr - 1;
            curr = a[r];
            if (curr < 0)return false;
        }
        r++;
    }
    return true;
}

int main()
{
    int tc = Int();
    while(tc--)
    {
        int n = Int();
        int check_middle_zero = 0;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = Int();
            if (a[i] == 0 && i > 0 && i < n - 1)
                check_middle_zero++;
        }

        if (check_middle_zero)printf("NO\n");
        else
        {
            int start = n / 2;
            if (n % 2 == 0 && a[start - 1] > a[start])start--;

            bool l = check_left(start, a);
            bool r = check_right(start, a, n);

            if (l && r)printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}



