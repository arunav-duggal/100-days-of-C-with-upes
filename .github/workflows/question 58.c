/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>
int main()
{
    int arr[50],n,i,max=0,min=1000000;
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
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("maximum is %d\nminimum is %d",max,min);
}
