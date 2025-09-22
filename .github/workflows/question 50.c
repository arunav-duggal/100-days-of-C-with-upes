/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int main()
{
    int i,j,q;
    for (i=1;i<=5;i++)
    {
        for (q=1;q<i;q++)
        {
            printf(" ");
        }
        for (j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
