#include<stdio.h>
int main()
{
    float day,year;
    printf("enter the days to convert into year\n");
    scanf("%f",&day);
    printf("enter the year to convert into days\n");
    scanf("%f",&year);
    day=day/365;
    year=year*365;
    printf("year from days is %.2f\n",day);
    printf("the days from year is %.2f",year);

    return 0;
}