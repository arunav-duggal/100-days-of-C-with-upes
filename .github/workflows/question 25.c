/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:

Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>

int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("operators are '+', '-', '*', '/','%%',\n");
    char c;
    printf("enter an operator: ");
    scanf(" %c", &c);

    switch (c)
    {
        case '+':
            printf("a + b = %d\n", a+b);
            break;
        case '-':
            printf("a - b = %d\n", a-b);
            break;
        case '*':
            printf("a * b = %d\n", a*b);
            break;
        case '/':
            printf("a / b = %d\n", a/b);
            break;
        case '%':
            printf("a %% b = %d\n", a%b);
            break;
        default:
            printf("invalid operator");
            break;
    }
    return 0;
}
