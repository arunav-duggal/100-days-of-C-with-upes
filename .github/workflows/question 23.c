/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:

Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

    // at time of uploading the code, the sample test cases in the question are WRONG mathematically
    // the real outputs are: output 2 should be 22 and output 3 should be 60

#include <stdio.h>
int main()
{
    int days,fine;
    printf("enter days since return date: ");
    scanf("%d", &days);

    if (days<=5)
    {
        fine=days*2;
        printf("please pay fine of %d rupees", fine);
    }
    else if (days>5)
    {
        if (days<=10)
        {
            days=days-5;
            fine=10+(days*4);
            printf("please pay fine of %d rupees", fine);
        }
        else if (days>10)
        {
            if (days<=30)
            {
                days=days-10;
                fine=30+(days*6);
                printf("please pay fine of %d rupees", fine);
            }
            else if(days>30)
            {
                printf("membership cancelled, please return the book and pay fine of 150 rupees");
            }
        }
    }

    return 0;
}
