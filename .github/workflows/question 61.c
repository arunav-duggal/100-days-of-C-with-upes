/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/


#include <stdio.h>
int main()
{
    int arr[50],n,i,search;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nokay\n");
    printf("enter the element you want to search: ");
    scanf("%d",&search);
        for (i=0;i<n;i++)
    {
        if (arr[i]==search)
        {
            printf("the number was found at index '%d' and the address was '%d'\n", i,&arr[i]);
            return 0;
        }
    }
    printf("index is '-1' (element was not found)");
}
