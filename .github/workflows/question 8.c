/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:

Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>
int main()
{
    int n,i,sum=0;

    printf("enter the number of natural numbers to be added: ");
    scanf("%d",&n);

    for (i=0;i<n+1;i=i+1)
    {
        sum=sum+i;
    }

    printf("the sum is: %d",sum);
}
