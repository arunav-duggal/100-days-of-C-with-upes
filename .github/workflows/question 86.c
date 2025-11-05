/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int l = 0;
    int h;

    scanf("%s", str);
    h = strlen(str) - 1;

    while (h > l) 
    {
        if (str[l++] != str[h--]) 
        {
            printf("Not palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
