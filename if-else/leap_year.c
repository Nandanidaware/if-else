//LEAP YEAR
#include<stdio.h>
int main()
{
	int Y;
	scanf("%d",&Y);
	if(Y%4==0 && Y%100!=0)
	{
		printf("LEAP YEAR");
	}
	else if(Y%400==0)
	{
		printf("LEAP YEAR");
	}
	return 0;
}
