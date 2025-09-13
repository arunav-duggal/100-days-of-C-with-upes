/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("number is not a prime");
            return 0;
        }   
    }
    printf("number is prime");
    return 0;
}
