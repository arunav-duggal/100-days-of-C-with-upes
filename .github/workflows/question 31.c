/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
    int n,bin=0,dig,n1=1;
    printf("enter number:");
    scanf("%d",&n);
    while (n>0)
    {
        dig=n%2;
        n=n/2;
        bin=bin+(dig*n1);
        n1=n1*10;
    }
    printf("%d\n",bin);
    return 0;
}
    
        
