/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:

Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks out of 100: ");
    scanf("%d", &marks);
    
    if (marks<0)
    {
        printf("marks are invalid");
    }
    else if (marks>=90)
    {
        printf("your grade is A");
    }
    else if (marks>=80 && marks<90)
    {
        printf("your grade is B");
    }
    else if (marks>=70 && marks<80)
    {
        printf("your grade is C");
    }
    else if (marks>=60 && marks<70)
    {
        printf("your grade is D");
    }
        else if (marks<60)
    {
        printf("your grade is F");
    }
    
    return 0;
}
