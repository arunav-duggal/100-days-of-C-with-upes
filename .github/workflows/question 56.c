/*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5
*/

#include <stdio.h>
int main()
{
    int arr[50],n,i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("array is [");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        if (i<n-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}
