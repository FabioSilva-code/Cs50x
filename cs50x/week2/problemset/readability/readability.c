#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // o user escreve o texto

    string text = get_string ("Enter text:");

    // é analisado e adicionada +1 a letras por cada letra a-z maiuscula ou minuscula
    // por cada espaço inserido no texto será adicionado +1 a words
    //cada . , ! , ou ? marca o fim de uma frase +1 sentence

    int letters = 0;
    int words = 0;
    int sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            // é analisado e adicionada +1 a letras por cada letra a-z maiuscula ou minuscula
        {
            letters++;
        }
        else if (text[i] == ' ')
            // por cada espaço inserido no texto será adicionado +1 a words
        {
            words++;
        }
        else if (text[i] == '!' || text[i] == '?' || text[i] == '.')
             //cada . , ! , ou ? marca o fim de uma frase +1 sentence
        {
            sentences++;
        }
    }
    //a ultima palavra nao terá um espaço no final logo nao seria contada
    words++;

    // Calculate the Coleman-Liau index using the formula given in the prompt
    //100 words (because 65 / 14 * 100 = 464.29). And 4 sentences per 14 words is an average of about 28.57 sentences per 100 words (because 4 / 14 * 100 = 28.57). Plugged into the Coleman-Liau formula, and rounded to the nearest integer, we get an answer of 3 (because 0.0588 * 464.29 - 0.296 * 28.57 - 15.8 = 3): so this passage is at a third-grade reading level.
    float L = ((float)letters/(float)words)*100;
    float S = ((float)sentences/(float)words)*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    int grade = round (index);

    // Print the appropriate output based on the grade level

    if (grade < 1 )
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf ("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}