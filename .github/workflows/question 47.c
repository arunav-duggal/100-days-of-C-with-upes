/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
