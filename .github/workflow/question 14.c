/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main()
{
    char a;
    printf("enter a character: ");
    scanf("%c",&a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
    {
        printf("character is a vowel");
    }
    else
    {
        printf("character is a consonant");
    }
    return 0;
    
}
