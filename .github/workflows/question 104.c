/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int pivot = -1;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    // The problem requires sum(1..x) == sum(x..n)
    // sum(1..x) = x*(x+1)/2
    // sum(x..n) = sum(1..n) - sum(1..x-1)
    // sum(1..n) = n*(n+1)/2
    // sum(1..x-1) = x*(x-1)/2
    //
    // So, x*(x+1)/2 = n*(n+1)/2 - x*(x-1)/2
    // Multiply by 2:
    // x*(x+1) = n*(n+1) - x*(x-1)
    // x^2 + x = n^2 + n - x^2 + x
    // 2*x^2 = n^2 + n
    // 2*x^2 = n*(n+1)
    // x^2 = (n*(n+1))/2
    // x = sqrt( (n*(n+1))/2 )
    //
    // We just need to find if (n*(n+1))/2 is a perfect square.
    
    long long totalSum = (long long)n * (n + 1) / 2;
    double x_double = sqrt(totalSum);
    int x = (int)round(x_double);

    if ((long long)x * x == totalSum)
    {
        pivot = x;
    }
    
    printf("%d\n", pivot);

    return 0;
}
