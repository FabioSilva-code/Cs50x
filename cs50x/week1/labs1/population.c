#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int ("Population start: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int y;
    do
    {
        y = get_int ("Population End Size: ");
    }
    while (y < n);

    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    do
    {
        n = n + (n/3) - (n/4);
        year++;
    }

    while (n < y);

    // TODO: Print number of years
    printf("The number of years is %i\n", year);
}