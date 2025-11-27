/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main()
{
    FILE *fptr;
    struct Employee e1, e2;

    fptr = fopen("employee.bin", "wb");

    if (fptr == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter ID, Name, and Salary: ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);

    fwrite(&e1, sizeof(struct Employee), 1, fptr);

    fclose(fptr);

    fptr = fopen("employee.bin", "rb");

    if (fptr == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fptr);

    printf("\nData read from binary file:\n");
    printf("ID: %d | Name: %s | Salary: %.2f\n", e2.id, e2.name, e2.salary);

    fclose(fptr);

    return 0;
}
