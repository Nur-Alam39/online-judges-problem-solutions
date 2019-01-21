#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        float C,d;
        cin>>C>>d;
        if(d==0)
            printf("%.2f\n",C);
        else
        {
            C=(d-32)*5/9-(C-32)*5/9;
            printf("%.2f\n",C);
        }
    }
    return 0;
}
