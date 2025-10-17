/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main()
{
    int arr[50][50],rows,columns,i,j,n;
    printf("enter number of rows: ");
    scanf("%d",&rows);
    printf("enter number of columns: ");
    scanf("%d",&columns);
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            printf("enter element at (%d,%d): ",i+1,j+1);
            scanf("%d",&n);
            arr[i][j]=n;
        }
    }
    for (i=0;i<rows;i++)
    {
        for (j=0;j<columns;j++)
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
