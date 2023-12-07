#include <cs50.h>
#include <stdio.h>


int main (void)
{

    int medida1 , medida2, medida3;
    do
    {
        medida1 = get_int ("Lado 1:");
        medida2 = get_int ("Lado 2:");
        medida3 = get_int ("Lado 3:");
    }
    while (medida1 < 1 || medida2 < 1 || medida3 < 1);

    if (medida1 + medida2 > medida3 || medida2 + medida3 > medida1 || medida1 + medida3 > medida2)
    {
        printf ("VALID\n");
    }
    else
    {
        printf ("INVALID\n");
    }

}