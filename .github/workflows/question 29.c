/*Q29: Write a program to calculate the factorial of a number.

Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>
int main()
{
    int a,i,prod=1;
    printf("input your number: ");
    scanf("%d",&a);
    for (i=1;i<a+1;i=i+1)
    {
        prod=prod*i;
    }
    printf("%d is the factorial", prod);
    return 0;
}
