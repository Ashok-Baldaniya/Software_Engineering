// * 
// # # 
// * * * 
// # # # # 
// * * * * *

#include <stdio.h>
int main()
{
    int i, j, m = 1, num;
    printf("enter row:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}