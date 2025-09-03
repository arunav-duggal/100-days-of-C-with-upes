/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:

Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main()
{   int a,bill,u,i;

    printf("enter the number of units: ");
    scanf("%d",&u);

    if (u<=100)
    {
        bill=u*5;
    }
    else if (u>100 && u<=200)
    {
        u=u-100;
        bill=bill+500+(u*7);
    }
    else if (u>200 && u<=300)
    {
        u=u-200;
        bill=bill+1200+(u*10);
    }
    else if (u>300)
    {
        u=u-300;
        bill=bill+2200+(u*12);
    }
    printf("the bill is %d", bill);
    return 0;
}
