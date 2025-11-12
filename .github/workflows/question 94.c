/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    int maxLength = 0;
    int currentLength = 0;
    int bestStartIndex = 0;
    int currentStartIndex = 0;
    int len;

    if (fgets(str, sizeof(str), stdin))
    {
        str[strcspn(str, "\n")] = 0;
    }

    len = strlen(str);

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                bestStartIndex = currentStartIndex;
            }
            currentLength = 0;
            currentStartIndex = i + 1;
        }
        else
        {
            currentLength++;
        }
    }

    for (int i = 0; i < maxLength; i++)
    {
        printf("%c", str[bestStartIndex + i]);
    }
    printf("\n");

    return 0;
}
