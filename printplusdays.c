struct mydate
{
    int d,m,y;
};
int leap(int y)
{
    if(y%100==0)
    {
        if(y%400==0)
        {
            return 1;
        }
        else
            return 0;
    }
    if(y%100!=0)
    {
        if(y%4==0)
        {
            return 1;
        }
        else
            return 0;
    }
}
int getmonthdays(int m,int y)
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2)
    {
        if(leap(y)==1)
        {
            return 29;
        }
    }
    return days[m];
}
struct mydate getnextdate(struct mydate DATE)
{
    struct mydate date;
    if(DATE.d+1>getmonthdays(DATE.m,DATE.y))
    {
        DATE.d=1;
        DATE.m=DATE.m+1;
    }
    else
    {
        DATE.d=DATE.d+1;
    }
    if(DATE.m>12)
    {
        DATE.m=1;
        DATE.y=DATE.y+1;
    }
    date.d=DATE.d;
    date.m=DATE.m;
    date.y=DATE.y;
    return date;
}
struct mydate getplusdays(struct mydate DATE,int days)
{
    int i;
    struct mydate date;
    for(i=0; i<days; i++)
    {
        getnextdate(DATE);
        date=getnextdate(DATE);
        DATE.d=date.d;
        DATE.m=date.m;
        DATE.y=date.y;
    }
    return DATE;
}
int main()
{
    int days=450;
    struct mydate date;
    date.d=10; date.m=04; date.y=2020;
    date=getplusdays(date,days);
    printf("DATE AFTER %d DAYS IS %d/%d/%d",days,date.d,date.m,date.y);
}
