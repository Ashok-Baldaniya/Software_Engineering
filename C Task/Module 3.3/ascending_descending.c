#include <stdio.h>
int main()
{
    int i, j, temp, num;
    int a[4];
    for (i = 0; i < 7; i++)
    {
        printf("enter %d index element : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("enter 1 for ascending order\n");
    printf("enter 2 for descending order\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:

        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            printf("%d ", a[i]);
        }
        break;

    case 2:

        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            printf("%d ", a[i]);
        }
        break;

    default:
        printf("please enter valid option");
        break;
    }

    return 0;
}