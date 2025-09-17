/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:

Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>
int main()
{
    int a,b,high,i;

    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    if (a>b)
    {
        for (i=1;i<a;i++)
        {
            if (a%i==0 && b%i==0)
            {
                high=i;
            }
        }
    }
    else if (b>a)
    {
        for (i=1;i<b;i++)
        {
            if (a%i==0 && b%i==0)
            {
                high=i;
            }
        }
    }
    printf("hcf if %d",high);
    
}

