#include<stdio.h> 
int main() 
{ 
int r1,c1,r2,c2,a,b; 

scanf("%d%d%d%d",&r1,&c1,&r2,&c2); 
if(c1%2==0) 
{ 
 if(r1%2==0) 
 { 
 a=0;
 } 
 else 
 a=1;
} 
else 
{ 
if(r1%2==0) 
 { 
  a=1;
 } 
 else 
  a=0;
} 
if(c2%2==0) 
{ 
 if(r2%2==0) 
 { 
 b=0;
 } 
 else 
 b=1;
} 
else 
{ 
if(r2%2==0) 
 { 
  b=1;
 } 
 else 
  b=0;
} 
if(a==0&&b==0||a==1&&b==1)
printf("same color");
else
printf("diff color");
}32

