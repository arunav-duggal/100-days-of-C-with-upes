/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:

Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() 
{
    int n, a, b, c, m, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<10) 
    {
        printf("The new number is: %d\n", n);
        return 0;
    }
    a=n%10;
    b=n;
    c=1;
    while(b>=10) 
    {
        b=b/10;
        c=c*10;
    }    
    m=(n-(b*c))/10;   
    s=a*c+m*10+b;   
    printf("The new number is: %d\n", s);
    return 0;
}
