/*Q69: Find the second largest element in an array.

Sample Test Cases:

Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>
int main()
{
    int arr[50],n,i,max=0,max2=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]>max2 && arr[i]<max)
        {
            max2=arr[i];
        }
    }
    printf("second largest element is %d",max2);
}
