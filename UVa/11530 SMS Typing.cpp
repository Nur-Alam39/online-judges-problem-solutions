#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,k=1;
    cin>>test;
    while(test--)
    {
        int i,j,count1=0;
        string text;
        char key[100]= {"adgjmptw behknquxcfilorvysz"};
        ignore();
        getline(cin,text);
        for(i=0; text[i]; i++)
            for(j=0; key[j]; j++)
                if(key[j]==text[i])
                {
                    if(j<=8)
                        count1++;
                    else if(j>=9&&j<=16)
                        count1+=2;
                    else if(j>=17&&j<=24)
                        count1+=3;
                    else if(j>=25&&j<=26)
                        count1+=4;
                }
        cout<<"Case #%d: %d\n"<<k++<<count1;
    }
    return 0;
}


