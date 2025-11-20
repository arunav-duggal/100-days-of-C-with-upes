/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main()
{
    int m, n;
    int nums1[100], nums2[100], merged[200];
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array (m): ");
    scanf("%d", &m);

    printf("Enter sorted elements of first array: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array (n): ");
    scanf("%d", &n);

    printf("Enter sorted elements of second array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            merged[k++] = nums1[i++];
        }
        else
        {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m)
    {
        merged[k++] = nums1[i++];
    }

    while (j < n)
    {
        merged[k++] = nums2[j++];
    }

    for (i = 0; i < k; i++)
    {
        printf("%d", merged[i]);
        if (i < k - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
