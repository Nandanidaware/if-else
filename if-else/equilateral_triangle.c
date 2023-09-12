//Equilateral Triangle
#include<stdio.h>
int main()
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if((A==B) && (B==C))
	{
		printf("Equilateral Triangle");
	}
	else if((A==B) || (B==C) || (C==A))
	{
		printf("Isosceles Triangle");
	}
	else
	{
		printf("Scalen Triangle");
	}
	return 0;
}
