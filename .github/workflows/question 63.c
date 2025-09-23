/*: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() 
{
    int n1,n2;

    printf("Enter number of elements in array 1: ");
    scanf("%d",&n1);
    int arr1[n1];
    for (int i=0;i<n1;i++) 
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the size of the second array: ");
    scanf("%d", &n2);   
    int arr2[n2];
    for (int i=0;i<n2;i++) 
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    int n3=n1+n2;
    int arr3[n3];
    for (inti=0;i<n1;i++) 
    {
        arr3[i]=arr1[i];
    }

    for (int i=0;i<n2;i++) 
    {
        arr3[n1+i]=arr2[i];
    }
    printf("\nMerged array:\n");
    for (int i=0;i<n3;i++) 
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    return 0;
}
