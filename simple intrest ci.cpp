#include<stdio.h>
int main()
{
	int si,ci,p,t,r;
	printf("enter the value of p");
	scanf("%d",&p);
	printf("enter the value of t");
	scanf("%d",&t);
	printf("enter the value of r");
	scanf("%d",&r);
	si=(p*t*r)/100;
	ci=(p*t*(1+r/100),t);
	printf("simple intrest is:%d",si);
	printf("compound intrest is:%d",ci);
	return(0);
}
