/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    int len;

    if (fgets(str, sizeof(str), stdin))
    {
        len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }
    }

    if (len > 0)
    {
        // Print the first initial
        printf("%c.", toupper(str[0]));

        // Loop through the rest of the string
        for (int i = 1; i < len; i++)
        {
            // If we find a space and it's not the last character
            if (str[i] == ' ' && str[i + 1] != '\0')
            {
                // Print the initial of the next word
                printf("%c.", toupper(str[i + 1]));
            }
        }
    }
    printf("\n");

    return 0;
}
