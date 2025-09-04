
/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:

Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    for (i=0;i<=(n*2);i++)
    {
        if (i%2==0)
            continue;
        else
            sum=sum+i;
    }
    printf("sum of first n odd numbers is %d", sum);
    return 0;
}
