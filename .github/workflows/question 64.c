/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
int main()
{
    int arr[50],n,i,j,n1,count,max=0,dig,mdig=0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter elelment number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        count=0; 
        n1=arr[i];
    while(n1>0)
        {
        dig=n1%10;
        if(dig==i)
        count++;
        n1=n1/10;
        }
        
        if(count>max) 
        {
            max=count;
            mdig=i;
        }
    }
    printf("Digit that occurs the most = %d ",mdig,max);
    return 0;
}
