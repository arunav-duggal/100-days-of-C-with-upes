Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    if (fgets(str, sizeof(str), stdin) != NULL) 
    {
        str[strcspn(str, "\n")] = 0;
        int len = strlen(str);
        int start = 0;
        int end = len - 1;
        char temp;
        while (start < end) 
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        printf("%s\n", str);
    }
    return 0;
}
