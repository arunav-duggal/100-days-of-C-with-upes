/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main()
{
    int rev=0,dig=0,n,i,n1;
    printf("enter a number: ");
    scanf("%d",&n);
    n1=n;
    for (;n>0;)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n=n/10;
    }
    printf("reverse of %d is %d",n1,rev);
}
