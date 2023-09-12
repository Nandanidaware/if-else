//Calculator
#include<stdio.h>
int main()
{
	int A,B,C,Sum,Sub,Mul,Div;
	scanf("%d%d%d",&A,&B,&C);
	if(strcmp(C, "+") == 0)
	{
		Sum=A+B;
		printf("%d",Sum);
	}
	else if(strcmp(C, "-") == 0)
	{
		Sub=A-B;
		printf("%d",Sub);
	}
	else if(strcmp(C, "*") == 0)
	{
		Mul=A*B;
		printf("%d",Mul);
	}
	else if(strcmp(C, "/") == 0)
	{
		if (B != 0)
		{
			printf("%d",Div);
		}
		else
		{
			printf("ERROR");
		}
	}
	return 0;
}
