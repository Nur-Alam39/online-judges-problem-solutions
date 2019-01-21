#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1;
    scanf("%d%d",&x1,&y1);
    if((x1>0&&y1==1)||(y1==0)||(y1>x1+1)||(x1-y1)%2==0)return printf("No"),0;
    else return printf("Yes"),0;
    return 0;
}
