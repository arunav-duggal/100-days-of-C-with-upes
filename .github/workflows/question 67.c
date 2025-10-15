/*Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/
#include <stdio.h>
int main() 
{
    int n,arr[50],pos,el,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);  
    for (i=0;i<n;i++) 
    {
        printf("enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the position and the element: ");
    scanf("%d %d",&pos, &el);  
    for (i=n;i>pos;i--) 
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=el; 
    n++; 
    printf("new array: ");
    for (i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
