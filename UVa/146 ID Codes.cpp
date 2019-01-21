#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a&&a[0]!='#')
    {
        if(next_permutation(a.begin(),a.end()))cout<<a<<endl;
        else printf("No Successor\n");
    }
    return 0;
}
