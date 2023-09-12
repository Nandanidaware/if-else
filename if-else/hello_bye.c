
//Number is multiple of five print HELLO otherwise BYE
#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	if(N%5==0)
	{
		printf("HELLO");
	}
	else
	{
		printf("BYE");
	}
	return 0;
}
