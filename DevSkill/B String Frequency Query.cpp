#include<bits/stdc++.h>
using namespace std;
int cn[26];
void print()
{
    printf("\nF:\n");
    for(int i=0; i<26; i++)
        printf("%c ",97+i);
    printf("\n");
    for(int i=0; i<26; i++)
        printf("%d ",cn[i]);
    printf("\n");
}
int main()
{
    ios_base::sync_with_stdio(false);
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        //printf("%d ",a[i]-97);
        cn[a[i]-97]++;
    }
    //print();
    int q,p,x;
    char y,s;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&p);
        if(p==1)
        {
            scanf("%d%c%c",&x,&s,&y);
            cn[a[x]-97]--;
            //print();
            cn[y-97]++;
            //print();
        }
        else
        {
            scanf("%c%c",&s,&y);
            printf("%d\n",cn[y-97]);
        }
    }
    return 0;
}
