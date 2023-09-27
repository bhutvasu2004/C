#include<stdio.h>
void main()
{
    int a,b,cos,rem;
    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);
    cos=a/b;
	rem=a%b;    
    printf("cos %d\n",cos);
    printf("rem %d\n",rem);  
}

