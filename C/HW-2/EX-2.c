#include <stdio.h>
#include <ctype.h>
int main()
{
    char x,y;

    printf("enter the character\n");
    fflush(stdout);
    scanf("%c", &x);
    y = tolower(x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf("%c is a vowel", x);
    }
    else
    {
        printf("%c is a constant", x);
    }
    return 0 ;
}