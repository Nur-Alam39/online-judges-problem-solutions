#include<bits/stdc++.h>
using namespace std;

int Int(){int n; scanf("%d", &n); return n;}
void Print(int n){printf("%d", n);}

int main()
{
    int tc = Int();
    while(tc--)
    {
        int n = Int();
        int d = n / 2;
        if(n % 2 == 0)
        {
            for (int i = 0; i < d; i++)
                printf("1");
        }
        else
        {
            printf("7");
            for (int i = 0; i < d - 1; i++)
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
