#include<stdio.h>
int main(){
   // freopen("out.txt","w",stdout);
    int a[200];
    for(int i=1,p=2;i<=96;i++)a[i]=10;
    a[97]=1;
    a[98]=5;
    a[99]=3;
    a[100]=7;
    printf("100\n");
    for(int i=1;i<=100;i++)
        printf("%d ",a[i]);
    return 0;
}

