/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    char target;
    int count = 0;

    if (fgets(str, sizeof(str), stdin)) 
    {
        str[strcspn(str, "\n")] = 0;
    }

    target = getchar();

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
