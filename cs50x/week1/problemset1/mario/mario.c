#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {

        x = get_int("height:");
    }
    while (x < 1 || x > 8);

    for (int y = 0 ; y < x ; y++)
    {

        for (int z = 0 ; z < x ; z++)
        {

            if(y+z < x-1)
                 printf(" ");
            else
                 printf("#");
        }
        printf("  ");
        for (int z = 0 ; z < x ; z++)
        {
             if(y+z >= x-1)
                 printf("#");
        }
        printf("\n");
    }

}