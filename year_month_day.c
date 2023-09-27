#include<stdio.h>
void main()
{
	int td,Y,M,D;
	printf("enter value of total days : ");
	scanf("%d",&td);
	Y=td/365;
	M=(td%365)/30;
	D=(td%365)%30;
	
	printf("\n years= %d \n months= %d \n days= %d",Y,M,D);	
}
