#include<stdio.h>
int main()
           {
           	int a,b,c,d,e,avg,per,total;
           	printf("enter the marks of subject a");
           	scanf("%d",&a);
           	printf("enter the marks of subject b");
           	scanf("%d",&b);
           	printf("enter the marks of subject c");
           	scanf("%d",&c);
           	printf("enter the marks of subject d");
            scanf("%d",&d);
            printf("enter the marks of subject e");
            scanf("%d",&e);
            total=a+b+c+d+e;
            avg=total/5;               
            per=(total*100)/500;
            printf("the average of 5 sujects is:%d",&avg);
            printf("the percentage of all the 5 subjects is :%d",&per);
            return(0); 
		   }
