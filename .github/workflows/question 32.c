/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
int main()
{
    int n,rev,dig,n1;
    printf("enter a number: ");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        dig=n%10;
        n=n/10;
        rev=(rev*10)+dig;
    }
    if (rev==n1)
    {
        printf("%d is a palindrome",n1);
    }
    else
    {
        printf("%d is not a palindrome",n1);
    }
    return 0;
}
