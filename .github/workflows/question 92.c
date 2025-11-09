/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    int seen[26] = {0}; 

    if (fgets(str, sizeof(str), stdin)) 
    {
        str[strcspn(str, "\n")] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (islower(ch))
        {
            int index = ch - 'a';
            if (seen[index] > 0)
            {
                printf("%c\n", ch);
                break;
            }
            else
            {
                seen[index] = 1;
            }
        }
    }

    return 0;
}
