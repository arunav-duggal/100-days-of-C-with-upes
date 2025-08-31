/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
int main()
{
    int a,b,c,output;
    printf("enter the first side: ");
    scanf("%d",&a);
    printf("enter the second side: ");
    scanf("%d",&b);
    printf("enter the third side: ");
    scanf("%d",&c);

    //checking whether equilateral, isosceles or scalene

    if (a==b && b==c && a==c)
    {
        printf("triangle is equilateral\n");
    }
    else if ((a==b && b!=c) || (a==c && b!=c) || (b==c && a!=c))
    {
        printf("triangle is isosceles\n");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf("triangle is scalene\n");
    }
    if ((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
    {
        printf("triangle is right angled");
    }
    
    return(0);
}
