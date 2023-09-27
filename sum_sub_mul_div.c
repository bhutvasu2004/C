#include<stdio.h>
void main()
{
	int a=10,b=3,sum,sub,mul;
	float div;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("addition, %d+%d=%d\n",a,b,sum);
	printf("substrication, %d-%d=%d\n",a,b,sub);
	printf("multification, %d*%d=%d\n",a,b,mul);
	printf("divison, %d/%d=%f",a,b,div);
}
