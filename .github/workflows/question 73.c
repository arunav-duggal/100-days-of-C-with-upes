/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int arr[50][50],rows,columns,i,j,n,sum[50],sum1;
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
        sum1=0;
        for (j=0;j<columns;j++)
        {
            sum1=sum1+arr[i][j];
        }
        sum[i]=sum1;
    }
    for (i=0;i<rows;i++)
    {
        printf("row number %d has the sum %d\n",i+1,sum[i]);
    }
}
