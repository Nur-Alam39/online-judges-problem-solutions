#include <iostream>
#include <stack>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> main, trace;
    int n, op, num, m = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &op);
        if(op == 1)
        {
            scanf("%d", &num);
            main.push(num);
            if(trace.empty())
            {
                trace.push(num);
            }
            else if(trace.size() > 0 && num > trace.top())
            {
                trace.push(num);
            }
            else if(num <= trace.top())
            {
                trace.push(trace.top());
            }
        }
        else if(op == 2)
        {
            main.pop();
            trace.pop();
        }
        else
        {
            printf("%d\n", trace.top());
        }
    }
    return 0;
}
