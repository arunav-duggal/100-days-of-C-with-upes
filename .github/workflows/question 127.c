/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("input.txt", "r");

    if (sourceFile == NULL)
    {
        printf("Error opening input.txt\n");
        return 1;
    }

    destFile = fopen("output.txt", "w");

    if (destFile == NULL)
    {
        printf("Error opening output.txt\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(toupper(ch), destFile);
    }

    printf("File converted successfully to output.txt\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
