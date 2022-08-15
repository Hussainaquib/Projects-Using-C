// program to generate digital clock or digital stop watch

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int h,m,s;
	int d=1000;
	printf("set time:");
	scanf("%d %d %d",&h,&m,&s);
	if(h>12||m>60||s>60)
	{
		printf("ERROR !");
	}
	while(1)
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\nClock:");
		printf("\n%02d:%02d:%02d",h,m,s);
		Sleep(d);
		system("CLS");
	}
}