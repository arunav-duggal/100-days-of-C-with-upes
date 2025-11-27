/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char command[20];
    int a, b;
    enum Operation op;

    scanf("%s %d %d", command, &a, &b);

    if (strcmp(command, "ADD") == 0) op = ADD;
    else if (strcmp(command, "SUBTRACT") == 0) op = SUBTRACT;
    else if (strcmp(command, "MULTIPLY") == 0) op = MULTIPLY;
    else return 0;

    switch (op)
    {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
