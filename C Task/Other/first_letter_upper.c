#include <stdio.h>

int main()
{
    int i;
    char s[4000] = "welcome to tops and build your future";
    s[0] = s[0] - 32;
    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            s[i+1] = s[i+1] - 32;
        }
    }

        printf("%s", s);

    return 0;
}
