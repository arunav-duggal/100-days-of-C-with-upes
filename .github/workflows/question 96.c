/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    int len, start, end, i;

    if (fgets(str, sizeof(str), stdin))
    {
        len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }
    }

    start = 0;
    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("%s\n", str);

    return 0;
}
