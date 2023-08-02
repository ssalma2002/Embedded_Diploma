#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    int len = strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("Reversed string: %s\n", s);

    return 0;
}
