#include <stdio.h>

#define IN 1
#define OUT 0
/*Подсчет строк, слов и символов во входном потоке*/
int main(void)
{
int c;
int nl;
int nw;
int nc;
int state;
state = OUT;
nl = nw = nc = 0;

while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}