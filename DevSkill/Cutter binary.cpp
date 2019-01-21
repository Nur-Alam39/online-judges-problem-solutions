#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n,int a, int b)
{
    int binaryNum[64];
    memset(binaryNum,0,sizeof(binaryNum));
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    a--,b--;
    int p=0,sum=0;
    for (int j=a; j<=b; j++)
        {
            sum+=binaryNum[j]*(pow(2,p));
            p++;
        }
        printf("%d\n",sum);
}
int main()
{
    int tc,n,a,b;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d%d",&n,&a,&b);
        if(n==0)printf("0\n");
        else
        decToBinary(n,a,b);
    }
    return 0;
}
