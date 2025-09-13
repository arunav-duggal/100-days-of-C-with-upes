/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main()
{
    int n,n1,dig,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        dig=n%10;
        n=n/10;
        sum=sum+(dig*dig*dig);
    }
    if (sum==n1)
    {
        printf("%d is an armstrong number",n1);
    }
    else
    {
        printf("%d is not an armstrong number",n1);
    }
}
