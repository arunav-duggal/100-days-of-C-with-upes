/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
//code to check if a matrix is symmetric or not
int main()
{

    int arr[50][50],arr2[50][50],r,c,i,j;
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
    if (r!=c)
    {
        printf("matrix is not symmetric");
    }
    else
    {
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                if (arr[i][j]!=arr[j][i])
                {
                    printf("matrix is not symmetry");
                    return 0;
                }
            }
        }
        printf("matrix is symmetric");
    }
}
