/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:

Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22
note: the sample test cases are once again wrong
*/

#include <stdio.h>
int main()
{
    int n;
    double sum=0.0,num=0,den=0;
    printf("enter number of terms: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) 
    {
        num=2*i;
        den=(4*i)-1;
        sum+=num/den;
    }
    printf("%f",sum);
}
