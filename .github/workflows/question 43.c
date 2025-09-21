/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:

Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>
int main()
{
    int a,dig,prod,i,sum=0,a1;
    printf("enter a number: ");
    scanf("%d",&a);
    a1=a;
    while (a>0)
    {
        prod=1;
        dig=a%10;
        a=a/10;
        for (i=1;i<dig+1;i++)
        {
            prod=prod*i;
        }
        sum=sum+prod;
    }
    if (a1==sum)
    {
        printf("number is a strong number");
    }
    else if (a1!=sum)
    {
        printf("number is not a strong number");
    }
    return 0;
}
