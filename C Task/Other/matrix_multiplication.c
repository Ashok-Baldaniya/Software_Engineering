#include <stdio.h>
int main()
{
    int i, j, c[i][j], a[i][j], b[i][j], row1, col1, row2, col2;
    // c[0][0] = 0;
    printf("Enter row of first matrix : \n");
    scanf("%d", &row1);
    printf("Enter column of first matrix : \n");
    scanf("%d", &col1);
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nthe element of first matrix is :\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter row of second matrix : \n");
    scanf("%d", &row2);
    printf("Enter column of second matrix : \n");
    scanf("%d", &col2);
    if (col1 == row2)
    {
        printf("\nenter element of second matrix: \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nthe element of second matrix is :\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d", b[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}