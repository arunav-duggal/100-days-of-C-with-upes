/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFilename);

    printf("Enter destination file name: ");
    scanf("%s", destFilename);

    sourceFile = fopen(sourceFilename, "r");

    if (sourceFile == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    destFile = fopen(destFilename, "w");

    if (destFile == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully to %s\n", destFilename);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
