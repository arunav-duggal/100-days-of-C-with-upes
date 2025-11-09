/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

/*Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    int j = 0;

    if (fgets(str, sizeof(str), stdin)) 
    {
        str[strcspn(str, "\n")] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            str[j] = str[i];
            j++;
        }
    }
    
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
