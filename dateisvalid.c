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
int isvalid(struct Mydate date)
{
    if(date.m<1 || date.m>12)
    {
        return 0;
    }
    if(date.d<0 || date.d>getmonthdays(date.m,date.y))
    {
        return 0;
    }
    if(date.y<0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int x;
    struct Mydate date;
    printf("enter dd/mm/yyyy");
    scanf("%d%d%d",&date.d,&date.m,&date.y);
    x=isvalid(date);
    if(x==0)
    {
        printf("DATE IS NOT VALID");
    }
    else
        printf("DATE IS VALID");
}
