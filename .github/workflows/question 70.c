/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main()
 {
    
    int arr[50],n,k,rotate[50],i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("Enter the %d elements: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter k positions to rotate: ");
    scanf("%d", &k);
    k=k%n;
    for(i=0;i<n;i++) 
    {
        rotate[(i+k)%n]=arr[i];
    }
    printf("Rotated array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", rotate[i]);
    }
    printf("\n");
    return  0;
}
