//Loss Percentage                                                  5

#include<stdio.h>
int main()
{
	int SP,CP,L;
	scanf("%d %d",&SP,&CP);
	L=CP-SP;
	if(SP<CP)
	{
		float LP=(float)(L*100)/CP;
		printf("%.2f",LP);
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
