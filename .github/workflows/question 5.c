/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:

Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

void main()
{
    float c,f;
    printf("enter temperature in celsius: ");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("the temperature is %.2f farenheit", f);
}
