#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

 int main(int argc, string argv[])
  {
      if (argc != 2)
      {
          printf("./no.vowels word \n");
          return 1;
      }
      string word;
      word = argv[1];

          for (int i = 0; i < strlen(word); i++)
    {
        // Check if the character is a vowel
        if (word[i] == 'a')
        {
            // If it is 'a', replace it with '4'
            word[i] = '6';
        }
        else if (word[i] == 'e')
        {
            word[i] = '3';
        }
        else if (word[i] == 'i')
        {
            word[i] = '1';
        }
        else if (word[i] == 'o')
        {
            word[i] = '0';
        }
    }
        printf("%s\n", word);
        return 0;

  }