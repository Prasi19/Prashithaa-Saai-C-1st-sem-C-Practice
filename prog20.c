#include<stdio.h>
int main()
{
float bill,discount,total;
scanf ("%f%f",&bill,&discount);
printf("total bill is%f",bill-(discount*bill/100));
return 0;
}
