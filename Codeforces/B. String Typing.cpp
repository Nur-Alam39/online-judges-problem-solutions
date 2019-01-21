#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,op=0;
    char c;
    scanf("%d%c",&n,&c);
    string a;
    cin>>a;
    string t="",d="";
    int j=0;
    for(int i=0;i<n;i++){
            printf("%d.");
            t.append(a.begin()+j,i);
            d.append(a.begin()+j+1,a.end()+i+1);
            cout<<t<<" "<<d<<endl;
    }
    printf("%d",op);
    return 0;
}


