#include <stdio.h>
int main()
{
    int i, n, count = 0;
    float average, sum = 0, x;
    printf("How many numbers will you enter?\n");
    fflush(stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("please enter a positive number:\n");
        fflush(stdout);
        scanf("%f", &x);
        if (x > 0)
        {
            sum = sum + x;
            count = count + 1;
        }
        else if (x < 0)
        {
            printf("negative numbers are not allowed\n");
            break;
        }
    }
    average = sum / count;
    printf("average = %0.2f \nsum= %0.2f", average, sum);
}