#include<stdio.h>
void main()
{
	int td,Y,W,D;
	printf("enter value of total days : ");
	scanf("%d",&td);
	Y=td/365;
	W=(td%365)/7;
	D=(td%365)%7;
	
	printf("\n years= %d \n months= %d \n days= %d",Y,W,D);	
}
