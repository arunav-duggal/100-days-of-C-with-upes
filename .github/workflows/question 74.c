/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>
int main()
{
    int arr[50][50],rows,columns,i,j;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    printf("enter number of columns: ");
    scanf("%d",&columns);
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            printf("enter element at (%d,%d): ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("transpose is : \n");
    for (j=0;j<columns;j++)
    {
        for (i=0;i<rows;i++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
