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
struct mydate getnextdate(struct mydate date)
{
    if(date.d>getmonthdays(date.m,date.y))
    {
        date.d=1;
        date.m++;
    }
    else
    {
        date.d=date.d+1;
    }
    if(date.m>12)
    {
        date.m=1;
        date.y++;
    }
    return date;
}
int main()
{
    struct mydate date;
    struct mydate nextdate1;
    printf("enter date dd/mm/yyyy");
    scanf("%d%d%d",&date.d,&date.m,&date.y);
    nextdate1=getnextdate(date);
    printf("next date is %d/%d/%d",nextdate1.d,nextdate1.m,nextdate1.y);
}
