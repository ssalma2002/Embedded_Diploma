#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f",&b);
    printf("After swapping, value of a =%0.1f\n",b);
    printf("After swapping, value of b =%0.2f",a);
}