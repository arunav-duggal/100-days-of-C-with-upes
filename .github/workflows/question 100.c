/*Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    int len, isFirst = 1;

    if (fgets(str, sizeof(str), stdin))
    {
        len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }
    }

    // Outer loop for the starting character
    for (int i = 0; i < len; i++)
    {
        // Inner loop for the ending character
        for (int j = i; j < len; j++)
        {
            if (isFirst)
            {
                isFirst = 0;
            }
            else
            {
                printf(",");
            }
            
            // Loop to print characters from start (i) to end (j)
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}
