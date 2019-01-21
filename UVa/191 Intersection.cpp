#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
bool segment(point p,point q,point r)
{
    if(q.x<=max(p.x,r.x)&&q.x>=min(p.x,r.x)&&q.y<=max(p.y,r.y)&&q.y>=min(p.y,r.y))
        return true;
    return false;
}
int orientation(point p,point q,point r)
{
    int ortn;
    ortn=(q.y-p.y)*(r.x-q.x)-(q.x-p.x)*(r.y-q.y);
    if(ortn==0)
        return 0;
    return (ortn>0)?1:2;
}
bool intersect(point p1,point q1,point p2,point q2)
{
    int o1,o2,o3,o4;
    o1=orientation(p1,q1,p2);
    o2=orientation(p1,q1,q2);
    o3=orientation(p2,q2,p1);
    o4=orientation(p2,q2,q1);
    if(o1!=o2&&o3!=o4)
        return true;
    if(o1==0&&segment(p1,p2,q1))
        return true;
    if(o2==0&&segment(p1,q2,q1))
        return true;
    if(o3==0&&segment(p2,p1,q2))
        return true;
    if(o4==0&&segment(p2,q1,q2))
        return true;
    return false;
}
int main()
{
    freopen("out.txt","w",stdout);
    int tc,a,b,c,d,e,f=0,g,h;
    struct point p1,q1,p2,q2;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
        p1.x=a,p1.y=b,q1.x=c,q1.y=d;
        int l[20],f=0;
        l[0]=e,l[1]=f,l[2]=e,l[3]=h;
        l[4]=e,l[5]=f,l[6]=g,l[7]=f;
        l[8]=e,l[9]=h,l[10]=g,l[11]=h;
        l[12]=g,l[13]=h,l[14]=g,l[15]=f;
        for(int i=0; i<16; i+=4)
        {
            p2.x=l[i],p2.y=l[i+1],q2.x=l[i+2],q2.y=l[i+3];
            if(intersect(p1,q1,p2,q2))
            {
                printf("T\n");
                f=1;
                break;
            }
        }
        if(f==0)
            printf("F\n");
    }
    return 0;
}


