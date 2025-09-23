
/*Q59: Count even and odd numbers in an array.

Sample Test Cases:

Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/

#include <stdio.h>
int main()
{
    int arr[50],n,i,even=0,odd=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("number of even numbers in array is %d\n", even);
    printf("number of odd numbers in array is %d\n", odd);
}
