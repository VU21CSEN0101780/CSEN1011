#include <stdio.h>
#include<string.h>
struct customer {
char name[15];
int amount;
char mobile_number[10];
}p1,p2;
int main()
{
  scanf("%s",&p1.name);
  scanf("%d",&p1.amount);
  scanf("%s",&p1.mobile_number);
  int a=strlen(p1.mobile_number);
  if(a!=10)
  printf("Invalid Mobile Number");
  else if(p1.amount<0)
  printf("Invlaid Amount");
  else
  printf("%d",p1.amount);
  scanf("%s",&p2.name);
  scanf("%d",&p2.amount);
  scanf("%s",&p2.mobile_number);
  int b=strlen(p2.mobile_number);
  if(b!=10)
  printf("Invalid Mobile Number");
  else if(p1.amount<0)
  printf("Invlaid Amount");
  else
  printf("%d",p1.amount);
}
