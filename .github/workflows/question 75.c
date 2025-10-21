/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
int main()
{
    int arr1[50][50],arr2[50][50],sum[50][50],len1,len2,i,j,c1,r1,c2,r2;
    printf("for first array\n");
    printf("enter number of rows: ");
    scanf("%d",&r1);
    printf("enter number of columns: ");
    scanf("%d",&c1);
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("for second array\n");
    printf("enter number of rows: ");
    scanf("%d",&r2);
    printf("enter number of columns: ");
    scanf("%d",&c2);
    for (i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    if ((r1==r2) &&(c1=c2))
    {
        printf("the sum is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sum[i][j]=arr1[i][j]+arr2[i][j];
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("invalid sizes for addition");
    }
    return 0;
}
