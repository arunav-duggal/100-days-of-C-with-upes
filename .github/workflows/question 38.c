/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:

Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>
int main()
{
    int a,dig,sum=0;
    printf("enter a number: ");
    scanf("%d",&a);
    while (a>0)
    {
        dig=a%10;
        a=a/10;
        sum=sum+dig;
    }
    printf("sum is %d",sum);
}
