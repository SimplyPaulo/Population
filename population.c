#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Insira o tamanho inicial: ");
    }
    while (start < 9);

    int final;
    do
    {
        final = get_int("Insira o tamanho final: ");
    }
    while (final < start);

    int y = 0;

    while (start < final)
    {
        start = start + round(start / 3) - round(start / 4);
        y++;
    }
    printf ("Anos: %i\n", y);
}