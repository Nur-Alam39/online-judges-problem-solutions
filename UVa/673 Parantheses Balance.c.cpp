#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        char a[200];gets(a);
        if(a[0]=='\0')printf("Yes\n");
        else
        {
            int l=strlen(a),j;
            char b[l+1];
            for(int j=0,i=0; a[i]; i++)
            {
                if((a[i]=='('||a[i]=='[')||(a[i]==')'&&b[j-1]!='(')||(a[i]==']'&&b[j-1]!='[')||j==0)b[j]=a[i],j++;
                else if((a[i]==')'&&b[j-1]=='(')||((a[i]==']'&&b[j-1]=='[')))if(j)j--;
                b[j]='\0';
            }
            if(b[0]=='\0')printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}


