/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 -> Name: Asha, Roll: 101, Marks: 85; Student 2 -> Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[50];
    int roll, marks, n;

    fptr = fopen("students.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name, Roll, and Marks for student %d: ", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fptr, "%s %d %d\n", name, roll, marks);
    }

    fclose(fptr);

    fptr = fopen("students.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nData read from file:\n");
    while (fscanf(fptr, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fptr);

    return 0;
}
