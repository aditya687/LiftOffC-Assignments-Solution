#include <stdio.h>

int main()
{
    char str[80];
    int i, words = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        /* Checking for spaces */
        if (str[i] == ' ')
        {
            words++;
        }
    }

    printf("The number of words = %d", words + 1);

    return 0;
    }
