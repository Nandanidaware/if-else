//Profit and loss                    

#include<stdio.h>
int main()
{
	int SP,CP,L,P;
	scanf("%d %d",&SP,&CP);
	if(SP==CP)
	{
		printf("No profit no loss");
	}
	else if(SP<CP)
	{
		L=CP-SP;
		printf("%d It is Loss",L);	
	}
	else
	{
		P=SP-CP;
		printf("%d It is Profit",P);
	}
	return 0;
}
