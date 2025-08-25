/*10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:

Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main()
{
    int t,h,s,m;
    printf("enter time in seconds: ");
    scanf("%d",&t);
    h=t/3600;
    t=t-(h*3600);
    m=t/60;
    s=t%60;
    printf("time is %d:%d:%d",h,m,s);
    return (0);
}
