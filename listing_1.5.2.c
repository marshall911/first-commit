#include <stdio.h>

int main(void)
{
    long nc = 0;

    puts("Программа для подсчета символов с учетом клавиши Enter");

    while (getchar() != EOF)
    {
        ++nc;
    }

    printf("%ld\n", nc);

    return 0;
}

