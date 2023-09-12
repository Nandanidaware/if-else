
//Negative Positive Zero
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N>0)
	{
		printf("Positive Number");
	}
	else if(N<0)
	{
		printf("Negative Number");
	}
	else if(N==0)
	{
		printf("Zero");
	}
	else
	{
		printf("Invalid");
	}
	return 0;
}
