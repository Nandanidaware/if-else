//School Rules
#include<stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	if(s<25)
	{
		printf("F GRADE");
	}
	else if((s>25) && (s<45))
	{
		printf("E GRADE");
	}
	else if((s>45) && (s<50))
	{
		printf("D GRADE");
	}
	else if((s>50) && (s<60))
	{
		printf("C GRADE");
	}
	else if((s>60) && (s<80))
	{
		printf("B GRADE");
	}
	else if(s>80)
	{
		printf("A GRADE");
	}
	else
	{
		printf("INVALID");
	}
	return 0;
}
