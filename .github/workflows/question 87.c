/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <ctype.h> 
#include <string.h> 

int main()
{
    char str[256];
    int spaces = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin)) 
    {
        str[strcspn(str, "\n")] = 0;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (isspace(ch))
        {
            spaces++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (!isalpha(ch))
        {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
