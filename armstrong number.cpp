#include<stdio.h>
int main()
{ 
   int r,s=0,n,n1;
   printf("enter the number");
   scanf("%d",&n);
   n1=n;
   s=0;
   while(n!=0)
   { 
    r=n%10;
    s=s+(r*r*r);
    n=n/10;
   }
   if(n1==s)
   { 
    printf("it is an armstrong number");
   }
   else 
   {
   	printf("it is not an armstrong number");
   }
   
    
}
