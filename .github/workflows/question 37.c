/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:

Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>
int main()
{

    int a,b,i;

    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);

    for (i=1;i<=(a*b);i++)
    {
        if (i%a==0 && i%b==0)
        {
            printf("lcm is %d",i);
            return 0;
        }
    }
}
