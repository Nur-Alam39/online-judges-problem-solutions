#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x,y,t,index,lastAnswer=0,Q;
    scanf("%d%d",&N,&Q);
    vector<int> seqList[N];
    for(int i=0;i<Q;i++)
        {
            scanf("%d%d%d",&t,&x,&y);
            index=(x^lastAnswer)%N;
            if(t==1)
                seqList[index].push_back(y);
            else if(t==2)
            {
                int s=seqList[index].size();
                lastAnswer=seqList[index][y%s];
                printf("%d\n",lastAnswer);
            }
        }
    return 0;
}

