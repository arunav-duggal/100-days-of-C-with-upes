/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>
int main()
{
    int arr[50][50],r,c,i,j,sum = 0;
    printf("enter number of rows: ");
    scanf("%d",&r);
    printf("enter number of columns: ");
    scanf("%d",&c);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for (i=0;i<r;i++)
    {
        sum = sum + arr[i][i]; 
    }

    printf("%d\n", sum);

    return 0;
}
