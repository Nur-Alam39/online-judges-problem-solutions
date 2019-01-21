#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)return true;
            else return false;
        }
        else return true;
    }
    else return false;
}
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    cin.ignore();
    while(tc--)
    {
        char a[10];
        scanf("%s",&a);
        int m,d,y,dom[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31},yd=365,mm,dd;
        m=(a[0]-'0')*10+(a[1]-'0');
        d=(a[2]-'0')*10+(a[3]-'0');
        y=(a[4]-'0')*1000+(a[5]-'0')*100+(a[6]-'0')*10+(a[7]-'0');
        if(isLeapYear(y))dom[2]=29,yd=366;
        int nd=0,df=dom[m]-d;
        for(int ms=1; ms<=m; ms++)nd+=dom[ms];
        nd=nd-df;
        int r=yd-nd;
        if(r>=280)
        {
            nd+=280;
            int s=0,day;
            for(mm=1; mm<=12; mm++)
            {
                day=dom[mm];
                s+=dom[mm];
                if(s>=nd)break;
            }
            dd=s-nd;
            dd=day-dd;
        }
        else
        {
            y++;
            if(isLeapYear(y))dom[2]=29;
            else dom[2]=28;
            int p=280-r,s=0,day;
            for(mm=1; mm<=12; mm++)
            {
                day=dom[mm];
                s+=dom[mm];
                if(s>=p)break;
            }
            dd=s-p;
            dd=day-dd;
        }
        printf("%d ",cs++);
        printf("%02d/%02d/%04d ",mm,dd,y);
        if(mm==1)
            if(dd>=21)printf("aquarius\n");
            else printf("capricorn\n");
        else if(mm==2)
            if(dd>=20)printf("pisces\n");
            else printf("aquarius\n");
        else if(mm==3)
            if(dd>=21)printf("aries\n");
            else printf("pisces\n");
        else if(mm==4)
            if(dd>=21)printf("taurus\n");
            else printf("aries\n");
        else if(mm==5)
            if(dd>=22)printf("gemini\n");
            else printf("taurus\n");
        else if(mm==6)
            if(dd>=22)printf("cancer\n");
            else printf("gemini\n");
        else if(mm==7)
            if(dd>=23)printf("leo\n");
            else printf("cancer\n");
        else if(mm==8)
            if(dd>=22)printf("virgo\n");
            else printf("leo\n");
        else if(mm==9)
            if(dd>=24)printf("libra\n");
            else printf("virgo\n");
        else if(mm==10)
            if(dd>=24)printf("scorpio\n");
            else printf("libra\n");
        else if(mm==11)
            if(dd>=23)printf("sagittarius\n");
            else printf("scorpio\n");
        else if(mm==12)
            if(dd>=23)printf("capricorn\n");
            else printf("sagittarius\n");
    }
    return 0;
}
