#include <stdio.h>
int main(void)
{
float a, b;

printf("How much of a bonus did you get?\n");
scanf("%f", &a);
b= .85*a;
printf("If you give 15 percent to charity, you will still");
printf("have %.2f\n", b);

return 0;
}