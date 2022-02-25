#include<stdio.h>
int fact(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
	int ng,nb,way;
	scanf("%d %d",&ng,&nb);
	if(ng+nb<10&&nb<ng+1)
	printf("Invalid");
    else
    {
	way=(fact(nb)*fact(nb+1))/fact(nb+1-ng);
    printf("%d",way);
}
}

