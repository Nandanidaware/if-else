//check 3 digit or not
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N>=100 && N<=999)
	{
		printf("3 digit number");
	}
	else
	{
		printf("not 3 digit number");
	}
	return 0;
}
