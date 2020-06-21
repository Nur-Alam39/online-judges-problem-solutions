#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,uk,m,i=0,s;
    scanf("%d",&n);
    char name[120];
    string f[n];
    while(n--)
    {
      scanf("%s%d%d",&name,&uk,&m);
      if(uk==1)
        f[i++]=name;
      else if(uk==0)
      {
          if(m>=30)
            f[i++]=name;
      }
    }
    if(i>0)
        for(s=0;s<i;s++)
        cout<<f[s]<<endl;
    else
        printf("Sorry for being rude!\n");
    return 0;
}
