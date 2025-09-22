/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:

Input 1:
3
Output 1:
Approximate sum: 3.3

note: this test case is wrong as the answer should be about 2.55

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>

int main()
{
    int n;
    double sum=0.0,numerator=0,denominator=0;
    printf("enter number of terms: ");
    scanf("%d",&n);

    if (n>=1) 
    {
        sum=sum+1;
    }

    for (int i = 2; i <= n; i++) 
    {
        numerator=2*i-1;
        denominator=2*i;
        sum+=numerator/denominator;
    }

    printf("sum of series for %d terms is %f",n,sum);
}
