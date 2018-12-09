#include <stdio.h>
int main()
{
double x;
int i;
i = 1400;
x = i; /* conversion from int to double */
printf("x = %10.6le i = %d\n",x,i);
x = 14.999;
i = x; /* conversion from double to int */
printf("x = %10.6le i = %d\n",x,i);
x = 1.0e+60; /* a LARGE number */
i = x; /* won’t fi t - what happens ?? */
printf("x = %10.6le i = %d\n",x,i);
return 0;
}
