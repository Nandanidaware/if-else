//Last digit of number divisible by 3 or not
#include<stdio.h>
int main()
{
	int N,LD;
	scanf("%d",&N);
	LD=N%10;
	if(LD%3==0)
	{
		printf("Last digit number is divisible by 3");
	}
	else
	{
		printf("Last digit number is not divisible by 3");
	}
	return 0;
}
