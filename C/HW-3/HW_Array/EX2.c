#include <stdio.h>
int main()
{
    int x;
    float n, sum=0, avg;
    printf("please enter number of data : ");
    fflush(stdout);
    scanf("%d",&x);
    for(int i=1; i<=x;i++)
    {
        printf("%d. Enter a number: ",i);
        fflush(stdout);
        scanf("%f",&n);
        sum=sum+n;
    }
    avg= sum/x;
    printf("Average= %0.2f",avg);
}