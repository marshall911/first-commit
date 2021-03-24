#include <stdio.h>

int main(void)
{
    int c;
    int nc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (nc == 0)
            {
                putchar(c);
                ++nc;
            }
        }
        else if (c == '\n')
        {
            nc = 0;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}
