#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i=0,s=1,f=1;
    vector<int>value;
    while(gets(a))
    {
        if(strcmp(a,"___________")==0&&f==0)break;
        if(f==0)
        {
            int dec=0,k=9,p=0;
            for(int j=k; j>=2; j--)
            {
                if(a[j]=='o')dec+=pow(2,p);
                if(a[j]!='.')p++;
            }
            value.push_back(dec);
        }
        f=0;
    }
    for(int i=0; i<value.size(); i++)printf("%c",value[i]);
    return 0;
}

