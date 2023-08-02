#include <stdio.h>
int main()
{
    float a [2][2],b[2][2],c[2][2];
    printf("please enter the elements of the 1st matrix:\n");
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d]= ",i+1,j+1);
           fflush(stdout);
           scanf("%f",&a[i][j]);
        }
        
    }
    printf("please enter the elements of the 2nd matrix:\n");
    for(int i=0;i<2;i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b[%d][%d]= ",i+1,j+1);
           fflush(stdout);
           scanf("%f",&b[i][j]);
        }
        
    }
    printf("sum of matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%0.1f\n",c[i][j]);
        }
        
    }
    
}