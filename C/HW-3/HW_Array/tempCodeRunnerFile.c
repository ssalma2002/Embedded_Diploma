#include <stdio.h>
int main()
{
    int r,c;
    int n;
    printf("enter rows: ");
    fflush(stdout);
    scanf("%d",&r);
    printf("enter coulomns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the matrix");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("a[%d][%d]= ", i+1,j+1); 
           fflush(stdout);
           scanf("%d", &n);
        }
        
    }
    
    

}