#include <stdio.h>
int main()
{
    char x;
    float y, z;
    printf("enter suitable operation \n ");
    fflush(stdout);
    scanf("%c", &x);
    printf("enter the operands \n ");
    fflush(stdout);
    scanf("%f %f", &y, &z);

    switch (x)
    {
    case '+':
        printf("the result is %f", y + z);
        break;
    case '-':
        printf("the result is %f", y - z);
        break;
    case '*':
        printf("the result is %f", y * z);
        break;
    case '/':
        printf("the result is %f", y / z);
        break;

    default:
        break;
    }
}