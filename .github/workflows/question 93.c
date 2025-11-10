/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[256], str2[256];
    int count[26] = {0};
    int len1, len2;
    int isAnagram = 1;

    if (fgets(str1, sizeof(str1), stdin))
    {
        str1[strcspn(str1, "\n")] = 0;
    }
    if (fgets(str2, sizeof(str2), stdin))
    {
        str2[strcspn(str2, "\n")] = 0;
    }

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        isAnagram = 0;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (islower(str1[i]))
            {
                count[str1[i] - 'a']++;
            }
        }
        
        for (int i = 0; i < len2; i++)
        {
            if (islower(str2[i]))
            {
                count[str2[i] - 'a']--;
            }
        }
        
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not anagrams\n");
    }

    return 0;
}
