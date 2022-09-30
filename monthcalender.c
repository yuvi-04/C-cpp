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
/*int getdaynumber(int d,int m,int y)
{

}*/
int main()
{
    int i,count=0,spaces;
    int stday = 2;
    printf("S   M   T   W   T   F   S \n");
    spaces=stday*4;
    for(i=0; i<spaces; i++)
    {
        printf(" ");
    }
    for(i=1; i<=getmonthdays(6,2021); i++)
    {
        printf("%-4d",i);
        if((i+stday)%7==0)
        {
            printf("\n");
        }
    }
}
