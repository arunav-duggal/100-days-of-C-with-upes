/*Q62: Reverse an array without taking extra space.

Sample Test Cases:

Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>
int main()
{
    int arr[50],i,n;

    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nreversed array is\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
