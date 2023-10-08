#include <stdio.h>
#include <string.h>
#include <conio.h>
#define area_circle 3.14159265*r*r
void main()
{
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    printf("Area= %0.2f",area_circle);
}