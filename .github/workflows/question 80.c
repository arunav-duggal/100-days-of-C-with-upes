/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
int main()
{
    int arr[50][50],arr2[50][50],mul[50][50],i,j,r,c,r1,c1,k;
    printf("for first array\n");
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
    printf("for second array\n");
    printf("enter number of rows: ");
    scanf("%d",&r1);
    printf("enter number of columns: ");
    scanf("%d",&c1);
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("first array is\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("second array is\n");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    if (c==r1)
    {
        printf("the product of both the arrays is\n");
        for (i=0;i<r;i++)
        {
            for (j=0;j<c1;j++)
            {
                mul[i][j]=0;
                for (k=0;k<c;k++)
                {
                    mul[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }
        for (i=0;i<r;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }
    else if (c!=r1)
    {
        printf("the matrices are not compatible for matrix multilplication");
    }
    return 0;
}
