
#include <stdio.h>
#define MAX_SIZE 100 // Replace all occurrences of a character


void replaceAll(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Dummy getchar() to eliminate extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", str);

    replaceAll(str, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c' : \n%s", oldChar, newChar, str);

    return 0;
}



void replaceAll(char * str, char oldChar, char newChar)
{
    int i = 0;


    while(str[i] != '\0')
    {
        /* If occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
        }

        i++;
    }
}
