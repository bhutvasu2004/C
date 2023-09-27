#include<stdio.h>
void main()
{
	int s,hour,minute,second;
	printf("enter value of total second : ");
	scanf("%d",&s);
	hour=s/3600;
	s=s%3600;
	minute=s/60;
	second=s%60;
	
	printf("%d : %d :%d",hour,minute,second);
}
