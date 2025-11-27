/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main()
{
    char input[50];
    struct Person p;

    scanf("%s", input);

    if (strstr(input, "FEMALE") != NULL)
    {
        p.gender = FEMALE;
    }
    else if (strstr(input, "MALE") != NULL)
    {
        p.gender = MALE;
    }
    else
    {
        p.gender = OTHER;
    }

    switch (p.gender)
    {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    return 0;
}
