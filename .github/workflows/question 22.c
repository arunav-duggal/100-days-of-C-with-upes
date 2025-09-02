/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main()
{
    float percentage, cost, selling;

    printf("enter cost price: ");
    scanf("%f", &cost);
    printf("enter selling price: ");
    scanf("%f", &selling);

    if (cost>selling)
    {
        printf("percentage loss is %.2f percent", ((cost-selling)/cost)*100);
    }
    else if (selling>cost)
    {
        printf("percentage profit is %.2f percent", ((selling-cost)/cost)*100);
    }
    else if (selling==cost)
    {
        printf("there is no profit or loss");
    }
    return 0;
}
