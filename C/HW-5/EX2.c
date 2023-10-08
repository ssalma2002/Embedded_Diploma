#include <stdio.h>
#include <string.h>
#include <conio.h>
struct distance
{
    int feet;
    float inch;
};
void main()
{
    struct distance x,y,sum;
    printf("Enter information for 1st distance");
    printf("Enter feet: ");
    scanf("%d",&x.feet);
    printf("Enter inch: ");
    scanf("%f",&x.inches);
    printf("Enter information for 2nd distance");
    printf("Enter feet: ");
    scanf("%d",&y.feet);
    printf("Enter inch: ");
    scanf("%f",&y.inches);
    sum.feet = y.feet+x.feet;
    sum.inch = y.inch + x.inch;
    if (sum.inch > 12)
    {
        sum.inch = sum.inch -12 ;
        ++sum.feet;
    }
    printf("Sum of distances: %d\'-%1f\"");
}