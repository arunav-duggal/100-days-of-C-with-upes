/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[256], str2[256];
    char temp[512];
    int len1, len2;

    if (fgets(str1, sizeof(str1), stdin))
    {
        len1 = strlen(str1);
        if (len1 > 0 && str1[len1 - 1] == '\n')
        {
            str1[len1 - 1] = '\0';
            len1--;
        }
    }
    if (fgets(str2, sizeof(str2), stdin))
    {
        len2 = strlen(str2);
        if (len2 > 0 && str2[len2 - 1] == '\n')
        {
            str2[len2 - 1] = '\0';
            len2--;
        }
    }

    if (len1 != len2)
    {
        printf("Not rotation\n");
    }
    else
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        if (strstr(temp, str2) != NULL)
        {
            printf("Rotation\n");
        }
        else
        {
            printf("Not rotation\n");
        }
    }

    return 0;
}
