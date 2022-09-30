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
void printnextdate(int d,int m,int y)
{
    if(d+1>getmonthdays(m,y))
    {
        d=1;
        m=m+1;
    }
    else
    {
        d=d+1;
    }
    if(m>12)
    {
        m=1;
        y=y+1;
    }
    printf("NEXT DATE IS %d/%d/%d",d,m,y);
}
int main()
{
    int d,m,y;
    printf("ENTER DATE dd/mm/yyyy");
    scanf("%d%d%d",&d,&m,&y);
    printnextdate(d,m,y);
}
