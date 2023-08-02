#include <stdio.h>
int main ()
{
    int counter=0;
    char s[100];
    char c;
    printf("enter a string\n");
    fflush(stdout);
    fflush(stdin);
    scanf("%[^\n]",s);
    
    printf("enter a character\n");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&c);
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==c)
    {
        counter ++;
    }
    }
    printf("count of %c is %d", c,counter);
}