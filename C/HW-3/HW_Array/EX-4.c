#include <stdio.h>
int main()
{
    int n, x, z, loc;
    printf("enter number of elements: ");
    fflush(stdout);
    scanf("%d", &n);
    int a[n + 1], b[n + 1];
    printf("enter the elements: \n");
    fflush(stdout);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &x);
        a[i] = x;
    }
    printf("enter the element to be inserted: \n");
    fflush(stdout);
    scanf("%d", &z);
    printf(" the location where to be inserted: \n");
    fflush(stdout);
    scanf("%d", &loc);
    printf("final result: \n");
    for (int j = 0; j < loc - 1; j++)
    {
        printf("%d \n", a[j]);
    }
    for (int k = loc; k < n + 1; k++)
    {
        b[k] = a[k - 1];
    }
    a[loc - 1] = z;
    printf("%d \n", a[loc - 1]);
    for (int k = loc; k < n + 1; k++)
    {
        printf("%d \n", b[k]);
    }
}