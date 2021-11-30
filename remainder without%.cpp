#include<stdio.h>
int main()
           {
           	float num, divisor, remainder;
           	printf("enter trhe number");
           	scanf("%f",&num);
           	printf("enter the divisor");
           	scanf("%f",&divisor);
           	while(num>=divisor)
			   {
			   	num =num-divisor;
			   }
			   remainder =num;
			   printf("the reminder is =%f",remainder);
		   }
