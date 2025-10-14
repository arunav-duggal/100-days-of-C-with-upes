/*Q65: Search in a sorted array using binary search.

Sample Test Cases:

Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include <stdio.h>
int main() 
{
    int  arr[50],n,i,search,start,end,mid,count =0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("enter element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search for= ");
    scanf("%d",&search);
    start= 0;
    end= n - 1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==search)
        {
            printf("Found at index %d", mid);
            count=1;
            break;
        } 
    else if(arr[mid]<search)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    } 
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}
