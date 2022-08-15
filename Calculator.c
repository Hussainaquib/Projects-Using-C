// Calculator for simple calculation

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b;
	char c;

	printf("Enter a operator:");
	scanf("%c",&c);
	printf("Enter a value:");
	scanf("%f %f",&a,&b);
	
	if(c=='+')
	{
		printf("%5.2f",a+b);
	}
	else if(c=='x')
	{
		printf("%5.2f",a*b);
	}
	else if(c=='-')
	{
		printf("%5.2f",a-b);
	}
	else if(c=='/')
	{
		printf("%5.2f",a/b);
	}
	else if(c=='^')
	{
		printf("%5.2f",pow(a,b));
	}
	else if(c=='%')
	{
		printf("%5.2f",(a*b)/100);
	}
	else
		printf("OUT OF SCOPE:");
	return 0;
}