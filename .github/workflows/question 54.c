/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>
int main()
{
    int i,j,q;
    for (i=1;i<=7;i=i+2)
    {
        for (q=1;q<=7-i;q=q+2)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    for (i=5;i>0;i=i-2)
    {
        for (q=1;q<=7-i;q=q+2)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}
