#include<bits/stdc++.h>
using namespace std;
const int N =1e6+5;
const long long M = (long long)1e9+7;
#define     ll      long long
#define     ull     unsigned long long
int Int() {
    int x;
    scanf("%d",&x);
    return x;
}
ll Long() {
    ll x;
    scanf("%I64d",&x);
    return x;
}
void Char(char* ch) {
    scanf("%s",ch);
}
template<typename t>inline t abs(t a) {
    if(a>=0)return a;
    return -a;
}
template<typename T> inline T modpow(T b, T p, T Mod) {
    T res  = 1;
    while(p) {
        if(p&1) {
            res *= b ;
            res %= Mod ;
        }
        b *= b;
        b %= Mod;
        p >>= 1;
    }
    return res ;
}

template<typename T> inline T ModInv(T b, T Mod) {
    return modpow(b, Mod - 2, Mod );
}

template<typename T> inline T pwr(T b, T p) {
    T res  = 1;
    while(p) {
        if(p&1) {
            res *= b ;
        }
        b *= b;
        p >>= 1;
    }
    return res ;
}

template<typename T> inline T gcd(T a, T b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

template <typename T> inline void Int(T &n) {
    n = 0;
    int f = 1;
    register int ch = getchar();
    for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
    for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
    n = n * f;
}
template<typename T, typename U> inline void Int(T &a, U &b) {
    Int(a);
    Int(b);
}
template<typename T, typename U, typename W> inline void Int(T &a, U &b, W &c) {
    Int(a,b);
    Int(c);
}
template<typename T, typename U, typename W,typename X> inline void Int(T &a, U &b, W &c, X &d) {
    Int(a,b,c);
    Int(d);
}
vector<int> Unique(vector<int> v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    return v;
}
///error///


void err(vector<string>::iterator it) {}
template<typename T,typename... Args>
void err(vector<string>::iterator it,T a,Args...args) {
    cout<<it->substr((*it)[0]==' ',it->length())<< " = " << a << " ";
    err(++it,args...);
}
///This DEBUGGER-tool need c++11///
#define     Int         Int()
#define     Long        Long()
#define     pii         pair<int,int>
#define     vi          vector<int>
#define     vll         vector<ll>
#define     vs          vector<string>
#define     pb          push_back
#define     mii         map<int,int>
#define     msi         map<string,int>
#define     mll         map<ll,ll>
#define     muli        map<ull,int>
#define     mli         map<ll,int>
#define     mil         map<int,ll>
#define     umii        unordered_map<int,int>
#define     umsi        unordered_map<string,int>
#define     umll        unordered_map<ll,ll>
#define     umuli       unordered_map<ull,int>
#define     umli        unordered_map<ll,int>
#define     umil        unordered_map<int,ll>
#define     si          set<int>
#define     sll         set<ll>
#define     ss          second
#define     ff          first
#define     PQi         priority_queue<int>
#define     PQl         priority_queue<ll>
#define     all(x)      x.begin(),x.end()
#define     LB          lower_bound
#define     UB          upper_bound
#define     Mx(a,b)     (a>b)?a:b
#define     Mn(a,b)     (a<b)?a:b
#define     mem(a)      memset(a,0,sizeof a)
#define     memn(a)     memset(a,-1,sizeof a)

int p[N];
int main() {
    clock_t b = clock();
    int n = Int, m = Int;
    for(int i = 1 ; i <= n ; i++) {
        p[i] = Int;
    }
    int ans = 0 ;
    for(int i = 1 ; i <= m ; i++) {
        int l = Int, r = Int ;
        ans += min(p[l], p[r]);
    }
    printf("%d\n",ans);
    clock_t e = clock();
    double time_spent = (double)(e - b) / CLOCKS_PER_SEC;
    cerr<<"Running Time: "<<time_spent<<" Seconds"<<endl;
    return 0;
}
