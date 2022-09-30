int main()
{
    int monthno,year,y;
    printf("enter monthno year");
    scanf("%d%d",&monthno, &year);
    switch (monthno)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("there are 31 days"); break;
        case 4: case 6: case 9: case 11: printf("there are 30 days"); break;
        case 2:
            if(year%100==0)
            {
                y=year%400;
                if(y==0)
                    printf("there are 29 days");
                else printf("there are 28 days");
            }
            else if(year%4==0)
                printf("there are 29 days");
            else printf("there are 28 days");
    }

}
