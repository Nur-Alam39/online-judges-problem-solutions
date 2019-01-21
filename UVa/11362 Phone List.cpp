#include<bits/stdc++.h>
using namespace std;
const int alphabet_size=10;
vector<int> match;
struct node
{
    struct node *children[alphabet_size];
    bool isEndofword;
};
struct node *getnewnode()
{
    struct node *newnode=new node;
    newnode->isEndofword=false;
    for(int i=0; i<alphabet_size; i++)
        newnode->children[i]=NULL;
    return newnode;
};
void insert(struct node *root,string word)
{
    struct node *current=root;
    int k=0,f=1;
    for(int i=0; i<word.length(); i++)
    {
        int index=word[i]-'0';
        if(current->children[index]==NULL)
        {
            f=0;
            current->children[index]=getnewnode();
        }
        current=current->children[index];
        if(f)k++;
    }
    match.push_back(k);
    current->isEndofword=true;
}
int main()
{
    freopen("out.txt","w",stdout);
    int tc,v=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        cin.ignore();
        string words;
        int size_w[n],l,m=0;
        struct node *root=getnewnode();
        for(int i=0; i<n; i++)
        {
            cin>>words;
            size_w[m++]=words.size();
            insert(root,words);
        }
        sort(size_w,size_w+n);
        sort(match.begin(),match.end());
        printf("%d.length:\n",v++);
        for(int i=0; i<n; i++)printf("%d ",size_w[i]);
        printf("\n");
        for(int i=0; i<n; i++)printf("%d ",match[i]);
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(size_w[i]!=size_w[i-1])
            {
                int l=0,r=n-1;
                while(l<=r)
                {
                    int m=l+(r-l)/2;
                    if(match[m]==size_w[i])
                    {
                        f=1;
                        break;
                    }
                    if(match[m]<size_w[i])l=m+1;
                    else r=m-1;
                }
                if(f)break;
            }
        }
        if(f)printf("NO\n");
        else printf("YES\n");
        match.erase(match.begin(),match.end());
    }
    return 0;
}

