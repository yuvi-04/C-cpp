struct Mydate
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
int diffdays(struct Mydate date1,struct Mydate date2)
{
    int i,count=0;
    for(i=0; 1; i++)
    {
        if(date1.d+1>getmonthdays(date1.m,date1.y))
        {
            date1.d=1;
            date1.m++;
            count++;
        }
        else
        {
            date1.d++;
            count++;
        }
        if(date1.m>12)
        {
            date1.m=1;
            date1.y++;
        }
        if(date1.d==date2.d && date1.m==date2.m && date1.y==date2.y)
        {
            break;
        }
    }
    return count;
}
int main()
{
    int difference;
    struct Mydate date1;
    struct Mydate date2;
    printf("Enter start date dd/mm/yyyy");
    scanf("%d%d%d",&date1.d,&date1.m,&date1.y);
    printf("Enter end date dd/mm/yyyy");
    scanf("%d%d%d",&date2.d,&date2.m,&date2.y);
    difference=diffdays(date1,date2);
    printf("difference days =%d",difference);
}
