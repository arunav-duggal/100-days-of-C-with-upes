/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("numbers before swap-> %d %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("swaped numbers are-> %d %d", a, b);
    return 0;
    
}
