#include <stdio.h>
int main ()
{
    int counter=0;
    char s[100];
    printf("enter a string\n");
    fflush(stdout);
    fflush(stdin);
    scanf("%[^\n]",s);
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]!='\0')
    {
        counter ++;
    }
    else
    {
        break;
    }
    }
    printf("length is %d", counter);
}