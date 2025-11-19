/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[256];
    int n;
    int lastIndex[256];
    int start = 0;
    int maxLength = 0;

    for (int i = 0; i < 256; i++)
    {
        lastIndex[i] = -1;
    }

    printf("Enter string s: ");
    if (fgets(s, sizeof(s), stdin))
    {
        s[strcspn(s, "\n")] = 0;
    }

    n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        int charIndex = (unsigned char)s[i];

        if (lastIndex[charIndex] >= start)
        {
            start = lastIndex[charIndex] + 1;
        }

        lastIndex[charIndex] = i;

        int currentLength = i - start + 1;
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
