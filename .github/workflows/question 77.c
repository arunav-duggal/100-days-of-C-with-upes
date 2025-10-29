/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
int main()
{
    int arr[50][50],arr2[50][50],r,c,i,j,element[50];
    int k, flag = 1; 
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

    for (i = 0; i < r; i++)
    {
        element[i] = arr[i][i];
    }

    for (i = 0; i < r; i++)
    {
        for (k = i + 1; k < r; k++) 
        {
            if (element[i] == element[k])
            {
                flag = 0; 
                break; 
            }
        }
        if (flag == 0)
        {
            break; 
        }
    }

    if (flag == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
