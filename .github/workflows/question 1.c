/*Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:

Input 1:
3 4

Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter number a:\n");
    scanf("%d", &a);

    printf("enter number b:\n");
    scanf("%d", &b);
    printf("your added number is %d\n", a+b);
    return 0;
}
