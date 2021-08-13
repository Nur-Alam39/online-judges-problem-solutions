#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int ax, ay, bx, by, fx, fy;
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &fx, &fy);
        int dis;
        dis = abs(ax - bx) + abs(ay - by);
        if (ax == bx && ax == fx)
         {
            if((fy > by && fy < ay)||(fy > ay && fy < by)) dis += 2;
         }
        else if (ay == by && ay == fy)
        {
            if ((fx > bx && fx < ax) || (fx > ax && fx < bx)) dis += 2;
        }
        printf("%d\n", dis);
    }
    return 0;
}
