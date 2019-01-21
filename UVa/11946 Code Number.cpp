#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    char c;
    cin>>tc;
    tc++;
    while(tc--)
    {
        string line,text;
        do
        {
            getline(cin,line);
            text+=line;
            text+='\n';
        }
        while(line!="");
        for(int i=0; i<text.size(); i++)
        {
            if(text.at(i)=='3')
                text.at(i)='E';
            else if(text.at(i)=='0')
                text.at(i)='O';
            else if(text.at(i)=='4')
                text.at(i)='A';
            else if(text.at(i)=='6')
                text.at(i)='G';
            else if(text.at(i)=='7')
                text.at(i)='T';
            else if(text.at(i)=='1')
                text.at(i)='I';
            else if(text.at(i)=='8')
                text.at(i)='B';
            else if(text.at(i)=='9')
                text.at(i)='P';
            else if(text.at(i)=='5')
                text.at(i)='S';
            else if(text.at(i)=='2')
                text.at(i)='Z';
        }
        cout<<text;
    }
    return 0;
}
