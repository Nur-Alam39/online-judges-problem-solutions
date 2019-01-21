#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char c;
    scanf("%d%c",&n,&c);
    char a[n+1];
    scanf("%s",&a);
    vector<char>ans;
    for(int i=0;i<n;i++){
            if(a[i]=='R'&&a[i+1]=='U')ans.push_back('D'),i++;
            else if(a[i]=='U'&&a[i+1]=='R')ans.push_back('D'),i++;
            else ans.push_back(a[i]);
    }
    cout<<ans.size();
    return 0;
}

