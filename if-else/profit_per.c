//Profit Percentage                                                4

#include<stdio.h>
int main()
{
	int SP,CP,P;
	scanf("%d %d",&SP,&CP);
	
	if(SP>CP)
	{
		P=SP-CP;
		float PP=(float)(P*100)/CP;
		printf("%.2f\n",PP);
	}
	else
	{
		printf("Invalid\n");
	}
	return 0;
}
