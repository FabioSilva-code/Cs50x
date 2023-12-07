#include <stdio.h>
#include <cs50.h>

#include <ctype.h>

int calc_hours(int hours[], int numWeeks, char output)
{
    int totalHours = 0;
    for (int i = 0; i < numWeeks; i++)
    {
        totalHours += hours[i];
    }
    if (output == 'T')
    {
        return totalHours;
    }
    else if (output == 'A')
    {
        return totalHours / numWeeks;
    }
    else
    {
        printf("Invalid output type\n");
        return -1;
    }
}

int main()
{
    int numWeeks;
    printf("Enter the number of weeks you've been taking CS50: ");
-1    scanf("%d", &numWeeks);

    int hours[numWeeks];
    for (int i = 0; i < numWeeks; i++)
    {
        printf("Enter the number of hours you spent on week %d: ", i+1);
        scanf("%d", &hours[i]);
    }

    char output;
    printf("Enter 'T' for total hours or 'A' for average hours: ");
    scanf(" %c", &output);
    output = toupper(output);

    int result = calc_hours(hours, numWeeks, output);
    printf("Result: %d\n", result);

    return 0;
}

