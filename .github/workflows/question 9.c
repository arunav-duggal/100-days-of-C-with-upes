/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:

Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include <stdio.h>
int main()
{
    float a,b,d,SI,CI,finalCI;
    int i,c;
    printf("enter principal: ");
    scanf("%f",&a);
    printf("enter interest rate: ");
    scanf("%f",&b);
    printf("enter number of years: ");
    scanf("%d",&c);
    SI=(a*b*c)/100;
    CI=a;
    for (i = 0; i < c; i++)
    {
        CI=CI*(1+b/100);
        //this formula gives total ammount after interest and not just the interest, therefore we have to subtract a from it
    }
    printf("simple interest is: %.2f\n", SI);
    printf("compound interest is: %.2f", CI-a);
    return (0);
}
