#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
 //user deve digitar chave (numero) que será o numero de vezes que as letras andarão ex: key1 b->c c->d etc... key2 a->c z->b etc
 //formula para o fazer (posição da letra que se pretende + key) - 26(numero letras alf)= x
 //ci=(pi+k)%26
 //c=ciphertext p=plaintext k=key % remainder of division
    if (argc !=2 ) //' ' =argumentcount 1 // '10'=argumentcount 2 // '10 20'= argc 3
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string key = argv[1];

    for(int i = 0 ; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    string plaintext = get_string("plaintext: ");

    int k = atoi(key);
    printf("ciphertext:");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i]-65)+k)%26)+65);
        }
        else if(islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i]-97)+k)%26)+97);
        }
        else
        {
            printf("%c",plaintext[i]);
        }
    }
    printf("\n");
}