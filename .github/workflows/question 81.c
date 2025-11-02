/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main()
{
    char str1[50]="",count;
    printf("enter string: ");
    scanf("%[^\n]",&str1);
    count=0;
    while (str1[count]!=0)
    {
        count++;
    }
    printf("the length is %d",count);
    return 0;
}
