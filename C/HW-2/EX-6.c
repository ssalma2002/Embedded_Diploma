#include <stdio.h>
int main()
{
    int x,sum ;
    printf("enter a number\n");
    fflush(stdout);
    scanf("%d",&x);
    for (int i =1; i<=x; i++)
    {
        sum=sum+i;
    }
    printf("%d" , sum);
}