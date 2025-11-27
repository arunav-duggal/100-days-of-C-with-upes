/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n)
{
    int max_index = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }
    return s[max_index];
}

int main()
{
    struct Student s[100];
    struct Student top;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d: ", i+1);
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = getTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
