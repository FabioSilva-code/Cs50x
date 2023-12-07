#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // Prompt the user for a message
    string message = get_string("Enter message: ");

    // Iterate through each character in the message
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        // Convert the character to an 8-bit binary number
        int num = (int) message[i];

        // Iterate through each bit in the 8-bit number and print it using the print_bulb function
        for (int j = 7; j >= 0; j--)
        {
            print_bulb((num >> j) & 1);
        }

        // Print a newline after each "byte" of 8 symbols
        printf("\n");
    }

    // Print a newline after the last "byte" of 8 symbols
    printf("\n");

    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
