#include <stdio.h>
#include <string.h>
#include <conio.h>
struct complex_num
{
    float real,imaginary;
};
void main()
{
    struct complex_num x,y;
    printf("for 1st complex number:\n");
    printf("real: ");
    scanf("%f",&x.real);
    printf("imaginary: ");
    scanf("%f",&x.imaginary);
    printf("for 2nd complex number:\n");
    printf("real: ");
    scanf("%f",&y.real);
    printf("imaginary: ");
    scanf("%f",&y.imaginary);
    printf("Sum= %0.1f + %0.1f i",(x.real+y.real),(x.imaginary +y.imaginary));
}
