#include<stdio.h>
void main()
{
	char ch;
	printf("enter character : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is consonet",ch);
	}
	
}
