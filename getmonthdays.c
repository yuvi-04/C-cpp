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
int main()
{
    int z;
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    z=getmonthdays(5,2021);
    printf("%d ",z);
}
