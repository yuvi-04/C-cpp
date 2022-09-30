#include<stdio.h>
main()
{

int yr, lp_yrs, difference, total_days, day_of_week, weekday;
printf("Enter the year:");
scanf ("%d", &yr);

difference = (yr%100); /*difference between entered year and reference year*/

lp_yrs = (yr%100) / 4; /*no. of leap years between concerned year and reference year*/

total_days = (difference*365) + lp_yrs ;

day_of_week = total_days % 7;

if (day_of_week == 1)

{
printf("The day on Jan 1st of this year is Monday");
}
else if (day_of_week ==2)

{
printf("The day on Jan 1st of this year is Tuesday");
}
else if (day_of_week == 3)

{
printf("The day on Jan 1st of this year is Wednesday");
}
else if (day_of_week == 4)

{
printf("The day on Jan 1st of this year is Thursday");
}
else if (day_of_week == 5)

{
printf("The day on Jan 1st of this year is Friday");
}
else if (day_of_week == 6)

{
printf("The day on Jan 1st of this year is Saturday");
}
else if (day_of_week == 7)

{
printf("The day on Jan 1st of this year is Sunday");
}

}
