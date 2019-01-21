#include<bits/stdc++.h>
#define ulli unsigned long long int
#define N 10000000
using namespace std;
vector<ulli>pal;
int main()
{
    string lStr;
    int k=0;
    ulli a[10]= {10,1000,100000,10000000,1000000000,100000000000};
    ulli b[10]= {99,9999,999999,99999999,9999999999,999999999999};
    //ulli a[20]= {900,90000,9000000,900000000,90000000000,9000000000000,900000000000000,90000000000000000};
    for(int z=0; z<4; z++)
    {
        for(ulli lIter = a[z]; lIter <=b[z]; lIter++)
        {
            cout<<lIter<<" ";
            ulli i,k,rev;
            k=i=lIter;
            for(; i>0; i/=10)rev=rev*10+i%10;
            if(k==rev)pal.push_back(k);
//            stringstream lStrS;
//            lStrS << lIter;
//            lStr = lStrS.str();
//            cout<<lStr<<" ";
//            string lRevStr = lStr;
//            int l=0,r=lStr.size()-1,f=1;
//            for(; l<r; r--,l++)if(lStr[l]!=lStr[r])
//                {
//                    f=0;
//                    break;
//                }
//            if(f==1)
//            {
//                //reverse(lRevStr.begin(),lRevStr.end());
//                //if(lRevStr == lStr )
//                //if(lStr.size()%2==0)
//                pal.push_back(lIter);
//            }
//            //if(lStr.size()%2)lIter+=a[k],k++;
//            //else
//            //lIter++;
//        }
        }
    }
    cout<<pal.size();
    return 0;
}
