#include <stdio.h>

#define OUT 0
#define IN 1

int main(void)
{
    int input_stream; // Входной поток
    int state;
    state = OUT;

    while ((input_stream = getchar()) != EOF)
    {
        if (input_stream == ' ' || input_stream == '\n' || input_stream == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            putchar('\n');
            state = IN;
        }
        putchar(input_stream);
    }
}
