#include <stdio.h>
int main()
{
    int r, c;
    int n;
    printf("enter rows: ");
    fflush(stdout);
    scanf("%d", &r);
    printf("enter coulomns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("enter the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]= ", i + 1, j + 1);
            fflush(stdout);
            scanf("%d", &a[i][j]);
        }
    }
    printf("entered matrix: \n");
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose\n");
    for (int i = 0; i < c; i++)
    {

        for (int j = 0; j < r; j++)
        {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
}