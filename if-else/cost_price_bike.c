
//COST PRICE OF BIKE
#include<stdio.h>
int main()
{
	int CP,T,A;
	scanf("%d",&CP);
	if(CP>100000)
	{
		T=(CP*15)/100;
		A=CP+T;
		printf("%d",A);
	}
	else if(CP>50000 && CP<=100000)
	{
		T=(CP*10)/100;
		A=CP+T;
		printf("%d",A);
	}
	else if(CP<=50000)
	{
		T=CP*5;
		A=CP+T;
		printf("%d",A);
	}
	else
	{
		printf("%d",CP);
	}
	return 0;
}
