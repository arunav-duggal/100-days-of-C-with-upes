/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/
#include <stdio.h>
int main() {
    
    int n, i, j, position;
    printf("Enter number of elements=");
    scanf("%d", &n);
    int arr[n + 1]; 

    printf("Enter elements of the sorted array=");
    for (i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert=");
    scanf("%d", &position);
    for (i = 0; i < n; i++) 
    {
        if (arr[i]>position) 
        {
            return 0;
        }
    }

    for (j = n; j > i; j--)
     {
        arr[j] = arr[j - 1];
    }
    arr[i] = position;
    n++;
    printf("New array=");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
