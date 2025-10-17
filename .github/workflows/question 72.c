/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main()
{
    int arr[50][50],rows,columns,i,j,sum,n;
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
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}
