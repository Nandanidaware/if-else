//Check last digit divisible by 3 or not
#include<stdio.h>
int main()
{
	int N,LD;
	scanf("%d",&N);
	LD=N%10;
	if(LD%3==0)
	{
		printf("Last Digit Number Is Divisible by 3");
	}
	else
	{
		printf("Last digit number is't divisible by 3");
	}
	return 0;
}
