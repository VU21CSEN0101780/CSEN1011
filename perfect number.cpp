#include<stdio.h>
int main()
{ 
   int r,s=0,n,n1,i;
   printf("enter the number");
   scanf("%d",&n);
   n=n1;
   s=0;
   for (i=1;i<n;i++)
   { 
    i+((i%n)==0);
    s=s+i;
   }
   if(n1==s)
   { 
    printf("it is a perfect number");
   }
   else
   {
   	printf("it is not a perfect number");
   }
   
    
}
