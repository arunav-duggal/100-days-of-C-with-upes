/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:

Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main()
{   int a,b;
    printf("enter the width: ");
    scanf("%d", &a);

    printf("enter the length: ");
    scanf("%d", &b);

    printf("%d is the area\n", a*b);
    printf("%d is the perimeter", a*2+b*2);

    return 0;
}
