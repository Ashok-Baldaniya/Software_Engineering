#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char s[20] = "hello world";
    int l = strlen(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = l - i; j >= 0; j--)
        {
            scanf("%c", &s[j]);
        }
        scanf("%c", &s[i]);
    }
    if (s[i] == s[j])
    {
        printf("string is pelindrome");
    }
    else
    {
        printf("string is not pelindrome");
    }

    return 0;
}