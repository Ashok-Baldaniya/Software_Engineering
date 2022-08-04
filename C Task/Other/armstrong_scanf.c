#include <stdio.h>
int main()
{
    int num, sum = 0, temp, rem;
    printf("enter any number\n");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }
    if (sum == temp)              // here use == conditional ope., not a = assignment operator
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is non armstrong");
    }

    return 0;
}