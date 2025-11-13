/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    int len;
    int lastSpaceIndex = -1;

    if (fgets(str, sizeof(str), stdin))
    {
        len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }
    }

    // Find the index of the last space
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            lastSpaceIndex = i;
            break;
        }
    }

    // If no space is found, it's just one name
    if (lastSpaceIndex == -1)
    {
        printf("%s\n", str);
    }
    else
    {
        // Print the first initial
        printf("%c.", toupper(str[0]));

        // Print initials of all middle names
        for (int i = 1; i < lastSpaceIndex; i++)
        {
            if (str[i] == ' ')
            {
                printf("%c.", toupper(str[i + 1]));
            }
        }

        // Print a space and the last name
        printf(" %s\n", &str[lastSpaceIndex + 1]);
    }

    return 0;
}
