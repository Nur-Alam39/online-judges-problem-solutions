#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,u,v,c=0,d=0;
    scanf("%d",&n);
    map<int,int>a,b;
    scanf("%d%d",&u,&v);
    a[u]++,c++;
    b[v]++,d++;
    for(int i=1; i<n-1; i++)
    {
        scanf("%d%d",&u,&v);
        if(!a[u]&&!b[u]&&!a[v]&&!b[v])a[u]++,b[v]++,c++,d++,printf("=1\n");
        else if(a[u]&&!b[v])b[v]++,d++,printf("=2\n");
        else if(b[u]&&!a[v])a[v]++,c++,printf("=3\n");
        else if(a[v]&&!b[u])b[u]++,d++,printf("=4\n");
        else if(b[v]&&!a[u])a[u]++,c++,printf("=5\n");
    }
    map <int, int> :: iterator itr;
    cout << "l: \n";
    for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout<< itr->first<<" "<<itr->second <<'\n';
    }
    cout << endl;
    cout << "r: \n";
    for (itr = b.begin(); itr != b.end(); ++itr)
    {
        cout<< itr->first<<" "<<itr->second <<'\n';
    }
    cout << endl;
    printf("%d",c*d-(n-1));
    return 0;
}

