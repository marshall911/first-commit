#include <stdio.h>

int main(void)
{
    int nl = 0;
    int nn = 0;
    int nc = 0;
    int b;

    while ((b = getchar()) != EOF)
    {
        if (b == ' ')
        {
            ++nc;
        }
        else if (b == '\t')
        {
            ++nl;
        }
        else if (b == '\n')
        {
            ++nn;
        }
    }

    printf("Подсчет пробелов %d\n", nc);
    printf("Подсчет знаков табуляции %d\n", nl);
    printf("Подсчет символов конца строки %d\n", nn);

    return 0;
}

