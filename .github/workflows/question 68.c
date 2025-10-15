/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include <stdio.h>
int main() 
{
    
    int i,n,del;
    int arr[50]; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) 
    {
        printf("enter element number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index position: ");
    scanf("%d",&del);
    for(i=del;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--; 
    printf("The new array= ");
    printf("[");
    for(i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("]");
    return 0;
}
