#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

typedef long long ll;

#define fn(x)((x) == 0 ? 1 : 1 << ((x) - 1))

int getDigit(ll x)
{
    stringstream ss;

    ss << x;

    return ss.str().size();
}

int main()
{
    ll S;
    scanf("%lld", &S);
    int size = getDigit(S);
    int NUM[size];
    size--;
    int i = size;
    int j;
    ll n;
    ll ans = 0;
    while (S)
    {
        NUM[i--] = S % 10;
        S /= 10;
    }
    for (i = 0; i <= size; i++)
    {
        n = 0;
        for (j = i; j <= size; j++)
        {
            n = n * 10 + NUM[j];
            /////////////
            // LOG //
            /////////////
            printf("%lld\n", n * fn(i) * fn(size - j));
            /////////////////////
            // END LOG //
            /////////////////////
            ans = ans + n * fn(i) * fn(size - j);
        }
    }

    printf("%lld\n", ans);

    return 0;
}
