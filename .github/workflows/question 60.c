/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
int main()
{
    int arr[50],n,i,neg=0,pos=0,zer=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        for (i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            pos=pos+1;
        }
        else if (arr[i]<0)
        {
            neg=neg+1;
        }
        else if (arr[i]==0)
        {
            zer=zer+1;
        }
    }
    printf("number of positive numbers in array is %d\n", pos);
    printf("number of negative numbers in array is %d\n", neg);
    printf("number of zero numbers in array is %d\n", zer);
}
